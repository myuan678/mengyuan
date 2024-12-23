class test;
    env e0;
    scoreboadr s0;
    mailbox drv_mbx;

    function new();
      drv_mbx = new();
      e0      = new();

    endfunction

    virtual task run();
      e0.d0.drv_mbx = drv_mbx;
      e0.run();
      s0.final_check();
      $finish;
    endtask
endclass