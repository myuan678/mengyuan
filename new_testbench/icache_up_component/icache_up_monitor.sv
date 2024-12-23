class icache_up_monitor;
    virtual   icache_up_if              up_vif              ;
    //virtual   icache_down_if            down_vif            ;
    up_mon_packet                       up_mon_pkt          ;

    mailbox                             mon_to_scb_mbx      ; 		
    mailbox                             id_mbx              ;


    task run();
        #100ns;
        $display ("T=%0t [UP MONITOR] starting ...", $time);
        forever begin
            @(posedge up_vif.clk);
            if(up_vif.upstream_txdat_vld===1)begin
                up_mon_pkt=new;
                up_mon_pkt.vld   = up_vif.upstream_txdat_vld;
                up_mon_pkt.data  = up_vif.upstream_txdat_data;
                up_mon_pkt.txnid = up_vif.upstream_txdat_txnid;
                mon_to_scb_mbx.put(up_mon_pkt);
                id_mbx.put(up_mon_pkt.txnid);
                $display("[UP_MONITOR] get a txdata!!");
            end
        end
    endtask

    
endclass:icache_up_monitor



    //task send_upstream_transmiter();
    //    forever begin
    //        drv_mbx.get(up_trans);
    //        if(cfg.debug_en) $display("T=%0d,Start to Listen DRV",$time);
    //        repeat(up_trans.delay)@(posedge up_vif.clk);
    //        while(id_q.size()==0)begin
    //            @(posedge up_vif.clk);
    //        end
    //        id = id_q.pop_front();
    //        up_vif.upstream_rxreq_vld              <= 1;
    //        up_vif.upstream_rxreq_pld.addr.tag     <= up_trans.tag;
    //        up_vif.upstream_rxreq_pld.addr.index   <= up_trans.index;
    //        up_vif.upstream_rxreq_pld.addr.offset  <= up_trans.offset;
    //        up_vif.upstream_rxreq_pld.opcode       <= up_trans.opcode;
    //        //vif.upstream_rxreq_pld.txnid        <= up_trans.txnid;
    //        up_vif.upstream_rxreq_pld.txnid        <= id;
    //        $display("T=%0d,[UP DRV] send_upstream_req: tag=%d, index=%d, txnid=%d, opcode=%d",$time, up_trans.tag, up_trans.index, id, up_trans.opcode);
    //        do begin
    //            @(posedge up_vif.clk);
    //        end while(!(up_vif.upstream_rxreq_rdy && up_vif.upstream_rxreq_vld));
    //        up_req = up_vif.upstream_rxreq_pld;
    //        up_drv_req_mbx.put(up_req);
    //        up_vif.upstream_rxreq_vld              <= 0;
    //        up_vif.upstream_rxreq_pld.addr.tag     <= 0;
    //        up_vif.upstream_rxreq_pld.addr.index   <= 0;
    //        up_vif.upstream_rxreq_pld.addr.offset  <= 0;
    //        up_vif.upstream_rxreq_pld.opcode       <= 0;
    //        up_vif.upstream_rxreq_pld.txnid        <= 0;
    //        ->drv_send_done;
    //    end
    //endtask