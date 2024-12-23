class down_monitor;
  virtual icache_up_if 	    icache_up_vif;
  virtual icache_down_if 	icache_down_vif;

  mailbox down_txreq_scb_mbx; 		// Mailbox connected to scoreboard
  mailbox down_rxdat_scb_mbx;

  typedef struct packed{
      logic   [ICACHE_DATA_WIDTH-1 :0]  pld;
      logic   [ICACHE_TXNID_WIDTH-1:0]  entry_id;
  } down_m_pkt_t;

  task run();
    $display ("T=%0t [DownReq Monitor] starting ...", $time);

    // Check forever at every clock edge to see if there is a
    // valid transaction and if yes, capture info into a class
    // object and send it to the scoreboard when the transaction
    // is over.
    forever begin
	    down_m_pkt_t down_m_pkt = new();//TODO:应该要定义一个txreq pld，然后再monitor txreq,定义成m_pkt_t？
        @(posedge icache_down_vif.clk);
        if(icache_down_vif.downstream_txreq_vld)begin
            down_m_pkt.pld      = icache_up_vif.downstream_txreq_pld;
            down_m_pkt.entry_id = icache_up_vif.downstream_txreq_entry_id;
            down_txreq_scb_mbx.put(down_m_pkt);
        end
    end

    forever begin
        downstream_rxdat_t rxdat_pkt=new();
        @(posedge icache_down_vif.clk);
        if(icache_down_vif.downstream_rxdat_vld)begin
            rxdat_pkt.downstream_rxdat_data      = icache_down_vif.downstream_rxdat_pld.downstream_rxdat_data;
            rxdat_pkt.downstream_rxdat_txnid     = icache_down_vif.downstream_rxdat_pld.downstrem_rxdat_txnid;
            rxdat_pkt.downstream_rxdat_entry_idx = icache_down_vif.downstream_rxdat_pld.downstrem_rxdat_entry_idx;
            rxdat_pkt.downstream_rxdat_opcode    = icache_down_vif.downstream_rxdat_pld.downstream_rxdat_opcode;
            down_rxdat_scb_mbx.put(rxdat_pkt);
        end
    end


  endtask
endclass:down_monitor




