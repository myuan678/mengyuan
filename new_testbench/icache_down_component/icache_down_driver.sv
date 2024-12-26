class icache_down_driver;
    import toy_pack::*;
    virtual   icache_down_if            down_vif        ;
    icache_cfg                          cfg             ;
    mailbox                             txreq_mbx       ;
    mem_model                           mem             ;
    icache_down_transaction             recv_down_trans ;
    icache_down_transaction             send_down_trans,down_trans_q[$], copy_trans;
    int                                 rxdat_delay=10,tx_req_cnt=0;

    function new();
        cfg = new();  
    endfunction

    task recv_tx_req();
        forever begin  //receive tx req
            do begin
                @(posedge down_vif.clk);
            end while(!(down_vif.downstream_txreq_rdy && down_vif.downstream_txreq_vld));
                recv_down_trans = new;
                recv_down_trans.txreq    = down_vif.downstream_txreq_pld       ;
                recv_down_trans.entry_id = down_vif.downstream_txreq_entry_id  ;
                down_trans_q.push_back(recv_down_trans);
                recv_down_trans.copy_to(copy_trans);
                txreq_mbx.put(copy_trans); 
                tx_req_cnt++;
                if(down_trans_q.size()>1)begin
                    down_trans_q.shuffle();
                    if(cfg.debug_en) $display("[DOWN_DRV OUT OF ORDER] %0d pkt in ooo queue!!",down_trans_q.size());
                end
                if(cfg.debug_en) $display("[DOWN_MONITOR] get a txreq! total %0d txreq",tx_req_cnt);                  
        end
    endtask

    task send_rx_data();
        forever begin
            while(down_trans_q.size()==0)begin
                @(posedge down_vif.clk);
            end

            rxdat_delay     = $urandom_range(1, 2);
            repeat(rxdat_delay)@(posedge down_vif.clk);
            send_down_trans = down_trans_q.pop_front();
            down_vif.downstream_rxdat_vld                            <= 1;
            down_vif.downstream_rxdat_pld.downstream_rxdat_opcode    <= send_down_trans.txreq.opcode;
            down_vif.downstream_rxdat_pld.downstream_rxdat_txnid     <= send_down_trans.txreq.txnid;
            //down_vif.downstream_rxdat_pld.downstream_rxdat_data      <= send_down_trans.txreq.addr;
            down_vif.downstream_rxdat_pld.downstream_rxdat_data      <= mem.read_mem(send_down_trans.txreq.addr);
            down_vif.downstream_rxdat_pld.downstream_rxdat_entry_idx <= send_down_trans.entry_id;
            if(cfg.debug_en) $display("[[DOWN_DRV] send RXDATA] mem[%0h]=%h, txnid=%0h",send_down_trans.txreq.addr,mem.mem[send_down_trans.txreq.addr], send_down_trans.txreq.txnid,$time);
            do begin
                @(posedge down_vif.clk);
            end while(!(down_vif.downstream_rxdat_vld && down_vif.downstream_rxdat_rdy));
            down_vif.downstream_rxdat_vld                            <=   0;
        end
    endtask


    task gen_rdy_backpress();
        int  bp_time,normal_time;
        forever begin
            bp_time = $urandom_range(0,0);
            normal_time = $urandom_range(2,50);
            down_vif.downstream_txreq_rdy <= 0;
            repeat(bp_time)@(posedge down_vif.clk);
            down_vif.downstream_txreq_rdy <= 1;
            repeat(normal_time)@(posedge down_vif.clk);
        end
    endtask

    virtual task run();
        #100ns;
        $display("[DOWN_DRV] start!!!!!!!!!");
        fork
            send_rx_data();
            recv_tx_req();
            gen_rdy_backpress();
        join
    endtask

endclass
