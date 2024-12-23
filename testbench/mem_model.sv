class ddr_model;
    import toy_pack::*;

    virtual   icache_if  vif;

    pc_req_t                            up_req,txreq_q[$],txreq;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]  txreq_entry_id_q[$],txreq_entry_id;
    int  rxdat_delay,tx_req_cnt=0,rx_dat_cnt=0;


    task gen_rxdat();
        fork
            forever begin  //receive tx req
                @(posedge vif.clk);
                if(vif.downstream_txreq_vld===1)begin
                    tx_req_cnt++;
                    txreq_q.push_back(vif.downstream_txreq_pld);
                    txreq_entry_id_q.push_back(vif.downstream_txreq_entry_id);
                end
            end
            forever begin  //gen rx data
                @(posedge vif.clk);
                if(txreq_q.size()>0)begin
                    rxdat_delay     = $urandom_range(5, 10);
                    repeat(rxdat_delay)@(posedge vif.clk);
                    txreq          = txreq_q.pop_front();
                    txreq_entry_id = txreq_entry_id_q.pop_front();
                    vif.downstream_rxdat_vld                            <= 1;
                    vif.downstream_rxdat_pld.downstream_rxdat_opcode    <= txreq.opcode;
                    vif.downstream_rxdat_pld.downstream_rxdat_txnid     <= txreq.txnid;
                    vif.downstream_rxdat_pld.downstream_rxdat_data      <= txreq.addr;
                    vif.downstream_rxdat_pld.downstream_rxdat_entry_idx <= txreq_entry_id;
                    $display("downstream_rxdat = %h   %t, nid=%0h,remain pkt=%0d",txreq.addr,$realtime,txreq.txnid,txreq_q.size() );
                    do begin
                        @(posedge vif.clk);
                    end while(vif.downstream_rxdat_rdy!==1'b1);
                    rx_dat_cnt++;
                    vif.downstream_rxdat_vld                            <=   0;
                    vif.downstream_rxdat_pld.downstream_rxdat_opcode    <= 'b0;
                    vif.downstream_rxdat_pld.downstream_rxdat_txnid     <= 'b0;
                    vif.downstream_rxdat_pld.downstream_rxdat_data      <= 'b0;
                    vif.downstream_rxdat_pld.downstream_rxdat_entry_idx <= 'b0;
                end
            end
        join
    endtask

endclass