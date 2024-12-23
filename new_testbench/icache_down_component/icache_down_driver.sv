class icache_down_driver;
    import toy_pack::*;
    virtual   icache_down_if            down_vif        ;
    mailbox                             txreq_mbx       ;
    mem_model                           mem             ;
    icache_down_transaction             item            ;
    icache_cfg                          cfg             ;

    icache_down_transaction             down_trans,down_trans_q[$], got_down_trans,copy_item;
    int                                 rxdat_delay=10,tx_req_cnt=0,number=0,rxdata_latency;

    function new();
        cfg = new();  
    endfunction

    typedef struct {
        int id;    
        time timestamp; 
    } time_t;

    time_t recv_txreq_time;
    time_t send_rxdat_time;
    time_t recv_txreq_time_q[$];

    task recv_tx_req();
        forever begin  //receive tx req
            do begin
                @(posedge down_vif.clk);
            end while(!(down_vif.downstream_txreq_rdy && down_vif.downstream_txreq_vld));
                item = new;
                item.txreq    = down_vif.downstream_txreq_pld;
                item.entry_id = down_vif.downstream_txreq_entry_id;
                //mem.read_mem(item.txreq.addr);
                recv_txreq_time.id = item.txreq.txnid;
                recv_txreq_time.timestamp = $time;
                recv_txreq_time_q.push_back(recv_txreq_time);
                down_trans_q.push_back(item);
                //tx_req_cnt++;
                item.copy_to(copy_item);
                txreq_mbx.put(copy_item); 
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
            down_trans = down_trans_q.pop_front();
            down_vif.downstream_rxdat_vld                            <= 1;
            down_vif.downstream_rxdat_pld.downstream_rxdat_opcode    <= down_trans.txreq.opcode;
            down_vif.downstream_rxdat_pld.downstream_rxdat_txnid     <= down_trans.txreq.txnid;
            //down_vif.downstream_rxdat_pld.downstream_rxdat_data      <= down_trans.txreq.addr;
            down_vif.downstream_rxdat_pld.downstream_rxdat_data      <= mem.read_mem(down_trans.txreq.addr);
            down_vif.downstream_rxdat_pld.downstream_rxdat_entry_idx <= down_trans.entry_id;
            if(cfg.debug_en) $display("[[DOWN_DRV] send RXDATA] mem[%0h]=%h, txnid=%0h",down_trans.txreq.addr,mem.mem[down_trans.txreq.addr], down_trans.txreq.txnid,$time);
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
