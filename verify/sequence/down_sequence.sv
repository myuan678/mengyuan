class down_sequence;
    down_transcation          down_trans[]      ;  
    int                       num               ;
    virtual   icache_up_if    icache_up_vif     ;
    virtual   icache_down_if  icache_down_vif   ;

    pc_req_t                            up_req,txreq_q[$],txreq;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]  txreq_entry_id_q[$],txreq_entry_id;
    int  rxdat_delay,tx_req_cnt=0,rx_dat_cnt=0;
    mailbox rx_dat_mbx;
    mailbox tx_txnid_mbx;

    mailbox down_txreq_scb_mbx;


    task gen_rxdat();
        bit [VERIF_ADDR_WIDTH-1:0]  mem_addr                         ;
        bit [REQ_DATA_WIDTH-1:0]    mem_data                         ;
        fork
            //forever begin
            //    if(this.up_req.size()!=0) begin
            //        mem_addr              = up_req.pop_front().addr ;
            //        mem_data              = ref_mem_data[mem_addr];
            //        rx_dat_mbx.put(mem_data);
            //        rx_txnid_mbx.put(up_req.txnid);
            //    end
            //end
            forever begin
                if(!down_txreq_scb_mbx.num()) begin
                    down_m_pkt_t down_m_pkt ;
                    mem_rxdat_t  rxdat_mem;
                    down_txreq_scb_mbx.get(down_m_pkt);
                    rxdat_mem.mem_txnid = down_m_pkt.txnid;
                    rxdat_mem.mem_addr  = down_m_pkt.addr;
                    rxdat_mem.mem_data  = ref_mem_data[mem_addr];
                    rx_dat_mbx.put(rxdat_mem);
                    //rx_txnid_mbx.put(mem_txnid);
                end
            end
        join_none
    endtask

endclass:down_sequence


