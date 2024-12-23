class up_monitor;
  virtual icache_up_if 	    icache_up_vif;
  virtual icache_down_if 	  icache_down_vif;

  mailbox scb_mbx; 		// Mailbox connected to scoreboard

    typedef struct packed{
        logic   [ICACHE_DATA_WIDTH-1 :0]  data;
        logic   [ICACHE_TXNID_WIDTH-1:0]  txnid;
    } m_pkt_t;

    task run();
        $display ("T=%0t [UpData Monitor] starting ...", $time);
        forever begin
	          m_pkt_t m_pkt = new();//TODO:应该要定义一个txdata，然后再monitor txdata,定义成m_pkt_t？
            @(posedge icache_up_vif.clk);
            m_pkt.data  = icache_up_vif.upstream_txdat_data;
            if(icache_up_vif.upstream_txdat_vld)begin
                m_pkt.data  = icache_up_vif.upstream_txdat_data;
                m_pkt.txnid = icache_up_vif.upstream_txdat.txnid;
                scb_mbx.put(m_pkt);
            end
        end
    endtask
endclass:up_monitor
