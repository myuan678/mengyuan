class icache_down_agent;
     
    icache_down_driver                down_drv       ;
    icache_down_sequence              down_seq       ;
    virtual   icache_down_if          down_vif       ;
    mailbox                           txreq_mbx      ;
    

    function new();
        //init
        down_drv             = new                   ;
        down_seq             = new                   ;
        txreq_mbx            = new                   ;

        //connection
        down_drv.down_vif    = down_vif              ;
        down_drv.txreq_mbx   = txreq_mbx             ;

    endfunction

  virtual task run();
        //#500ns;
        $display("[DOWN_agent] start!!!!!!!!!");
        fork
            down_drv.run();
        join_none
  endtask

endclass