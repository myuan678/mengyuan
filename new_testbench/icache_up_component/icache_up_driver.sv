class icache_upstream_driver;
    import toy_pack::*;

    icache_cfg                          cfg             ;
    virtual   icache_up_if              up_vif          ;
    mailbox                             up_drv_req_mbx  ;
    mailbox                             drv_mbx         ;
    mailbox                             id_mbx          ;
    mailbox                             drv_to_scb_mbx  ;
    mailbox                             ref_to_scb_mbx  ;
    event                               drv_mbx_update  ;
    icache_up_transaction               up_trans        ;
    mem_model                           mem             ;
    int  rx_req_cnt=0;
    int  id_q[$],id,copy_id;
    pld_packet up_pkt,ref_up_pkt;
    pld_packet up_req_pkt,up_req_pkt_q[$];
    pld_packet up_pkt_pop,ref_pld_pkt,dut_pld_pkt;
    pld_packet pkt_by_txnid[logic [ICACHE_REQ_TXNID_WIDTH-1:0]] [$];


    function new();
        cfg = new();  
    endfunction
    //class txnid_copy;
    //    int txnid;  
    //    function void copy_to(output txnid_copy copy_txnid);
    //        copy_txnid = new this;
    //    endfunction
    //endclass
    
    task send_upstream_req();
        forever begin
            if(drv_mbx.num()!=0) begin
                $display("DRV_MBX NUM = %d", drv_mbx.num());
                drv_mbx.peek(up_trans);
                //repeat(up_trans.delay)@(posedge up_vif.clk);
                while(id_q.size()==0)begin
                    @(posedge up_vif.clk);
                end
                id = id_q.pop_front();
                up_vif.upstream_rxreq_vld              <= 1'b1;
                up_vif.upstream_rxreq_pld.addr.tag     <= up_trans.tag;
                up_vif.upstream_rxreq_pld.addr.index   <= up_trans.index;
                up_vif.upstream_rxreq_pld.addr.offset  <= up_trans.offset;
                up_vif.upstream_rxreq_pld.opcode       <= up_trans.opcode;
                up_vif.upstream_rxreq_pld.txnid        <= id;
                if(cfg.debug_en) $display("[UP DRV] T=%0d send_upstream_req: addr = %h,tag=%d, index=%d, txnid=%d, opcode=%d",$time, {up_trans.tag, up_trans.index,up_trans.offset},up_trans.tag, up_trans.index, id, up_trans.opcode);
                do begin
                    @(posedge up_vif.clk);
                end while(!(up_vif.upstream_rxreq_rdy && up_vif.upstream_rxreq_vld));
                up_req_pkt               = new();
                up_req_pkt.opcode        = up_vif.upstream_rxreq_pld.opcode ;
                up_req_pkt.txnid         = up_vif.upstream_rxreq_pld.txnid  ;
                up_req_pkt.addr          = up_vif.upstream_rxreq_pld.addr   ;
                up_req_pkt.data          = 'b0                              ;
                up_req_pkt.send_time     = $time                            ;
                up_req_pkt.recv_time     = 'd0                              ;
                up_req_pkt.copy_to(up_pkt);
                if(cfg.debug_en) $display("[UP DRV] send req pld addr =%h, txnid=%d,Time=%d",up_pkt.addr,up_pkt.txnid,$realtime);
                up_req_pkt_q.push_back(up_pkt);
                up_drv_req_mbx.put(up_pkt);
                rx_req_cnt++;
                $display("[UP DRV] rxreq_cnt = %d", rx_req_cnt);
                if(pkt_by_txnid.exists(up_pkt.txnid))begin
                    pkt_by_txnid[up_pkt.txnid].push_back(up_pkt);
                    if(cfg.debug_en) $display("[UP DRV] PUSH one pkt to queue %d", up_pkt.txnid);
                end else begin
                    pkt_by_txnid[up_pkt.txnid] ={};
                    pkt_by_txnid[up_pkt.txnid].push_back(up_pkt);
                    if(cfg.debug_en) $display("[UP DRV] CREATE one pkt to queue %d", up_pkt.txnid);
                end               
                drv_mbx.get(up_trans);
            end
            else begin
                up_vif.upstream_rxreq_vld <= 1'b0 ;
                @(posedge up_vif.clk);
            end
        end
    endtask

    task recv_tx_data();
        $display ("T=%0t [UP MONITOR ] starting to listen ...", $time);
        forever begin
            @(posedge up_vif.clk);
            if(up_vif.upstream_txdat_vld===1)begin
                int txnid = up_vif.upstream_txdat_txnid;
                //#1ns;
                id_mbx.put(txnid);
                if(pkt_by_txnid.exists(txnid))begin
                    if(pkt_by_txnid[txnid].size()>0)begin
                        up_pkt_pop           = pkt_by_txnid[txnid].pop_front();
                        up_pkt_pop.data      = up_vif.upstream_txdat_data     ;
                        up_pkt_pop.recv_time = $time                          ;
                        up_pkt_pop.copy_to(dut_pld_pkt)                       ;
                        drv_to_scb_mbx.put(dut_pld_pkt)                       ;
                        ->drv_mbx_update;
                        if(cfg.debug_en) $display("[UP MONITOR] RECEIVE TX DATA = %h, ADDR = %h!!, Time= %d", dut_pld_pkt.data, dut_pld_pkt.addr, $realtime);
                        if(cfg.debug_en) $display("[UP MONITOR] RECEIVE ADDR = %h !!", dut_pld_pkt.addr);
                    end
                end
            end             
        end
    endtask

    task get_ref_data();
        bit[255:0]  tmp;
        forever begin
            if(up_req_pkt_q.size()>0)begin
                ref_up_pkt           = up_req_pkt_q.pop_front();
                ref_up_pkt.data      = mem.read_mem(ref_up_pkt.addr);
                ref_up_pkt.recv_time = $time;
                ref_up_pkt.copy_to(ref_pld_pkt);
                ref_to_scb_mbx.put(ref_pld_pkt);
                if(cfg.debug_en) $display("[UP DRV REF MEM] ADDR = %h, REF_DATA = %h, txnid = %d ",ref_up_pkt.addr,ref_up_pkt.data, ref_up_pkt.txnid);
                if(cfg.debug_en) $display("[UP DRV REF MEM] put %d ref mem data",ref_to_scb_mbx.num());
            end
            else begin
                @(posedge up_vif.clk);
            end
        end
    endtask

        


    task init_id_q();
        for(int i=0;i<16;i++)begin
            id_q.push_back(i);
        end
        id_q.shuffle();
    endtask

    task token_recycle();
        bit [3  :0]rec_id;
        forever begin
            id_mbx.get(rec_id);
            if(id_q.size()>0)begin
                foreach(id_q[i])begin
                    if(id_q[i]==rec_id)begin
                        $error("[UP_DRV] REC ID=%0d, but it already in queue",rec_id);
                        //$finish;
                    end
                end
            end
            id_q.push_back(rec_id);
            id_q.shuffle();
        end
    endtask


    virtual task run();
        init_id_q();
        #100ns;
        $display("[UP_DRV] start!!!");
        fork
            send_upstream_req();
            recv_tx_data();
            token_recycle();
            get_ref_data();
        join
    endtask


endclass