module tb_top;
  bit clk;

  icache_up_if 	    icache_up_if 	  ();
  icache_down_if 	  icache_down_if	();
  icache_top 	      u_icache_top    (icache_up_if, icache_down_if);



initial begin
    clk             = 0   ;
 	  rst_n           = 1   ;
	  #50  rst_n      = 0   ;
    #100 rst_n      = 1   ;
	  forever #10 clk = ~clk;
end


  initial begin
    test t0;
    //clk <= 0;
    //icache_up_if.rst_n <= 0;
    //#100;
    //icache_up_if.rst_N <= 1;

    t0 = new;
    t0.e0.icache_up_vif   = icache_up_if;
    t0.e0.icache_down_vif = icache_down_if;
    t0.run();

    // Once the main stimulus is over, wait for some time
    // until all transactions are finished and then end
    // simulation. Note that $finish is required because
    // there are components that are running forever in
    // the background like clk, monitor, driver, etc
    //#50 $finish;
  end
endmodule


