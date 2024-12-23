class icache_env;
     
    icache_cfg                      cfg                     ;
    icache_scoreboard               scb                     ;
    mem_model                       mem                     ;
    icache_up_agent                 up_agent                ;
    icache_down_agent               down_agent              ;
    mailbox                         up_drv_req_mbx          ;
    mailbox                         drv_to_scb_mbx          ;
    mailbox                         ref_to_scb_mbx          ;
    mailbox                         drv_mbx                 ;
    mailbox                         id_mbx                  ;
    mailbox                         txreq_mbx               ;
    event                           drv_mbx_update          ;
    
    int                             delay,txnid,index,tag   ;
    string                          testname                ;

    function new();
        //init
        scb                     = new                       ;
        mem                     = new                       ;
        up_agent                = new                       ;
        down_agent              = new                       ;

        //connection
        scb.up_drv              = up_agent.up_drv           ;
        scb.up_drv_req_mbx      = up_agent.up_drv_req_mbx   ;
        scb.drv_to_scb_mbx      = up_agent.drv_to_scb_mbx   ;
        scb.ref_to_scb_mbx      = up_agent.ref_to_scb_mbx   ;
        scb.txreq_mbx           = down_agent.txreq_mbx      ;
        scb.mem                 = mem                       ;
        down_agent.down_drv.mem = mem                       ;
        up_agent.up_drv.mem     = mem                       ;
    endfunction

  virtual task run();
        #100ns;
        $display("ENVENVENV");
        fork
            up_agent.run();
            down_agent.run();
            scb.ref_mem_to_fifo();
            scb.compare_data();
            scb.counter();
        join_none
  endtask

  virtual task final_check();
        scb.final_check();
  endtask
endclass