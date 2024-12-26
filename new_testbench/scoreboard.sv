class icache_scoreboard;
    import toy_pack::*;
    
    icache_cfg                      cfg             ;
    mailbox                         up_drv_req_mbx  ;
    mailbox #(toy_pack::pc_req_t)   down_req_mbx    ;
    mailbox                         txreq_mbx       ;
    mailbox                         drv_to_scb_mbx  ;
    mailbox                         ref_to_scb_mbx  ;
    icache_upstream_driver          up_drv          ;
    icache_down_driver              down_drv        ;
    mem_model                       mem             ;
    event                           drv_mbx_update  ;
    
    pld_packet                      req, up_req[$]  ;
    icache_down_transaction         tx_req          ;
    bit [255:0]                     dut_data        ;
    bit [31:0]                      mon_addr        ;
    bit [31:0]                      addr            ;
    pld_packet  ref_mem_fifo[logic [31:0]] [$];
    pld_packet  mon_packet,up_tx_pkt,up_packet,ref_pkt;
    pld_packet  scb_got_pkt;
    int addr_flag,txnid_flag,tx_dat_cnt=0,up_req_cnt=0,tx_req_cnt=0,err_cnt=0,packet_cnt=0;
    int latency;
    int first_start_time=32'hfffffff;
    int last_recv_time  =0;
    int max_latency     =0;
    int min_latency     =32'hfffffff;
    int total_latency   = 0; 

    task ref_mem_to_fifo();
        forever begin
            ref_to_scb_mbx.get(up_packet);
            addr =up_packet.addr;
            if(ref_mem_fifo.exists(addr))begin
                ref_mem_fifo[addr].push_back(up_packet);
                $display(" EXIST REF MEM: ADDR=%h DATA=%h PUSH to FIFO by addr",addr,up_packet.data);
            end else begin
                ref_mem_fifo[addr] = {};
                ref_mem_fifo[addr].push_back(up_packet);
                $display(" NEW CREATE REF MEM: ADDR=%h DATA=%h PUSH to FIFO by addr",addr,up_packet.data);
            end
        end
    endtask


    task compare_data();
        pld_packet  ref_mem_pkt;
        forever begin
            drv_to_scb_mbx.get(up_tx_pkt);
            $display("[SCB COMAPRE] monitor pkt addr = %h, data=%h, txnid = %d",up_tx_pkt.addr,up_tx_pkt.data,up_tx_pkt.txnid);
            mon_addr   = up_tx_pkt.addr;
            if(ref_mem_fifo.exists(mon_addr))begin
                addr_flag = 1;
                if(ref_mem_fifo[mon_addr].size()>0)begin
                    ref_mem_pkt = ref_mem_fifo[mon_addr].pop_front();
                    if(ref_mem_pkt.data == up_tx_pkt.data)begin
                        $display("[SCB] COMPARE PASS: DUT Data matches REF MEM Data. Addr 0x%0h, DATA =%0h, ref=%0h,%0d", up_tx_pkt.addr, up_tx_pkt.data,ref_mem_pkt.data,ref_mem_fifo[mon_addr].size());
                    end else begin
                        err_cnt++;
                        $error("[SCB] COMPARE FAIL: DUT Data dont match REF MEM Data.");
                        $display("[SCB] ADDR = %h, DUT DATA = %h,REF DATA = %h",up_tx_pkt.addr,up_tx_pkt.data,ref_mem_pkt.data);
                    end
                end
                else begin
                    $display("ERROR!!! no ref data!");
                end
            end
            else begin
                $error("ADDR doesn't exist!!! ADDR = %h",mon_addr);
            end
            latency = up_tx_pkt.recv_time - up_tx_pkt.send_time;
            if(up_tx_pkt.send_time < first_start_time) first_start_time = up_tx_pkt.send_time;
            if(up_tx_pkt.recv_time > last_recv_time)   last_recv_time   = up_tx_pkt.recv_time;
            if(latency < min_latency)   min_latency = latency;
            if(latency > max_latency)   max_latency = latency;
            total_latency += latency;
        end
    endtask


    task counter_req();
        forever begin
            up_drv_req_mbx.get(req);
            up_req_cnt++;
            $display("[SCOREBOARD] Scoreboard get up req: tag=%d, index=%d, id=%d", req.addr.tag, req.addr.index, req.txnid);
        end 
    endtask
    task counter_miss();
        forever begin
            txreq_mbx.get(tx_req);
            tx_req_cnt++;
            $display("[SOCREBOARD] scoreboard get tx_req: txreq_addr = %h, txreq_txnid = %d",tx_req.txreq.addr, tx_req.txreq.txnid);
        end
    endtask


    task final_check();
        $display("PACKET CNT        = %d", up_req_cnt );
        $display("FIRST_SEND_TIME   = %d", first_start_time);
        $display("LAST_RECV_TIME    = %d", last_recv_time);
        $display("BAND_WIDTH        = %0f", real'(up_req_cnt*32)/real'(last_recv_time-first_start_time));
        $display("MAX_LATENCY       = %d", max_latency);
        $display("MIN_LATENCY       = %d", min_latency);
        $display("AVERAGE_LATENCY   = %d",real'(total_latency) / up_req_cnt);
        $display("UP_DRV_NUM        = %d",up_req_cnt);
        $display("MISS REQ NUM      = %d",tx_req_cnt);
        $display("HIT RATE          = %0.2f%%", (up_req_cnt-tx_req_cnt)*100.0/up_req_cnt);
        if(err_cnt==0)begin
            $display("------------------------------------TC PASSED T=%0d------------------------------------",$time);
        end else begin
            $display("------------------------------------TC FAILED------------------------------------");
        end
    endtask


endclass