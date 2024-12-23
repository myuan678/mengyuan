class scoreboard;
    import toy_pack::*;
    mailbox #(toy_pack::pc_req_t)   up_req_mbx      ;
    up_driver                       up_drv          ;
    mailbox #(toy_pack::pc_req_t)   down_req_mbx    ;
    down_driver                     down_drv        ;
    //mem_model                       mem             ;
    virtual  icache_up_if           icache_up_vif   ;
    virtual  icache_down_if         icache_down_vif ;
    ref_model                       ref_m;
    
    pc_req_t   req,up_req[$];
    int  txnid_flag,tx_dat_cnt=0,up_req_cnt=0,err_cnt=0;



    //add
    mailbox scb_mbx;
    mailbox drv_mbx;
    //mailbox ref_mem_mbx;
    typedef struct packed{
          logic   [255:0]  data;
          logic            txnid;
    } m_pkt_t;

    mailbox     ref_mem_mbx;
    mailbox     down_txreq_scb_mbx;
    


//TODO:这里需要修改，比较的monitor的结果
    task compare();
        fork
            forever begin
                up_transaction up_trans_scb=new;
                drv_mbx.get(up_trans_scb);
                up_req_cnt++;
                //up_req.push_back(req);
                $display("sb get up req: tag=%d, index=%d, id=%d", up_trans_scb.addr.tag, up_trans_scb.addr.index, up_trans_scb.txnid);
            end
            forever begin
                m_pkt_t  tx_pld             ;
                m_pkt_t  ref_tx_pld         ;
                @(posedge icache_up_vif.clk);
                if (scb_mbx.num() > 0) begin
                    scb_mbx.get(tx_pld);  // 从 mailbox 中获取实际数据
                end else begin
                    $display("Error: No data in scb_mbx for txnid: %0h", txnid);
                    return;
                end
                ref_m.get_ref_mem(tx_pld.txnid, ref_tx_pld);
                assert((ref_tx_pld.data == tx_pld.data) && (ref_tx_pld.txnid == tx_pld.txnid)) else begin
                    if(icache_scb_cfg.debug_en) begin
                        $display ("[DEBUG][SCB][%0t] read   DATA from DUT: %b",$time,dut_data)  ;
                        $display ("[DEBUG][SCB][%0t] read   ID   from DUT: %b",$time,dut_sb_pld);
                        $display ("[DEBUG][SCB][%0t] stored DATA in   SCB: %b",$time,ref_data)  ;
                    end
                end
            end
        join
    endtask






    task final_check();
        if(scb_mbx.num()!=0)begin
            err_cnt++;
            $error("there %0d up req not processed!",up_req.size());
        end
        $display("PC send %0d up req, receive %0d tx dat",up_req_cnt,tx_dat_cnt);
        $display("PC send %0d tx req, receive %0d rx dat",mem.tx_req_cnt,mem.rx_dat_cnt);
        if(err_cnt==0)begin
            $display("------------------------------------TC PASSED------------------------------------");
        end else begin
            $display("------------------------------------TC FAILED------------------------------------");
        end
        $display("%0d req hit, %0d req miss",up_req_cnt-mem.tx_req_cnt,mem.tx_req_cnt);
        $display("Hit rate: %0.2f%%",(up_req_cnt-mem.tx_req_cnt) * 100.0 /up_req_cnt );
        $display("--------------------------------------------------------------------------------");
    endtask

endclass:scoreboard
