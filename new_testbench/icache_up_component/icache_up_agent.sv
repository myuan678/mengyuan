class icache_up_agent;
     
    icache_cfg                      cfg                     ;
    virtual   icache_up_if          up_vif                  ;
    icache_upstream_driver          up_drv                  ;
    mem_model                       mem                     ;
    icache_up_base_sequence         up_base_seq             ;
    icache_up_trace_sequence        up_trace_seq            ;
    event                           drv_mbx_update;


    mailbox                         up_drv_req_mbx          ;
    mailbox                         drv_mbx                 ;
    mailbox                         id_mbx                  ;
    mailbox                         drv_to_scb_mbx          ;
    mailbox                         ref_to_scb_mbx          ;

    function new();
        //init
        up_drv                  = new                   ;
        up_base_seq             = new                   ;
        up_trace_seq            = new                   ;
        up_drv_req_mbx          = new                   ;
        drv_mbx                 = new                   ;
        id_mbx                  = new                   ;
        drv_to_scb_mbx          = new                   ;
        ref_to_scb_mbx          = new                   ;

        //connection
        up_drv.up_vif           = up_vif                ;
        up_drv.up_drv_req_mbx   = up_drv_req_mbx        ;
        up_drv.drv_mbx          = drv_mbx               ;
        up_drv.id_mbx           = id_mbx                ;
        up_drv.drv_to_scb_mbx   = drv_to_scb_mbx        ;
        up_drv.ref_to_scb_mbx   = ref_to_scb_mbx        ;
        up_base_seq.drv_mbx     = drv_mbx               ;
        up_trace_seq.drv_mbx    = drv_mbx               ;

    endfunction

  virtual task run();
        //#500ns;
        $display("[UP_agent] start!!!!!!!!!");
        fork
            $display("[UP_agent] start2!!!!!!!!!");
            up_drv.run();
        join_none
  endtask

endclass