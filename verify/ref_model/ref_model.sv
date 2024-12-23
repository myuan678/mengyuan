class ref_model ;
    icache_cfg                  icache_cfg_ref_model               ;
    
    //-----ref_mem
    bit [REQ_DATA_WIDTH-1:0]    ref_mem[bit [ADDR_WIDTH-1:0]]      ;
    bit [ADDR_WIDTH-1:0]        ref_mem_addr                       ;
    //bit [REQ_DATA_WIDTH-1:0]    ref_mem_data                       ;


    mailbox         mem_mbx;
    mailbox         ref_mem_mbx;

    //add by xuemengyuan
    bit [DATA_WIDTH-1:0] mem [bit [ADDR_WIDTH-1:0]];


    typedef logic [31:0] logic_32;
    typedef logic [255:0] logic_256;
    logic_256            memory [logic_32]  ;
    logic   [DATA_WIDTH-1:0]            tmp_data      ;
    string                              arg_parse_str ;
    string                              code_path     ;

    function logic_256 read_memory(logic_32 address);
        logic_256 data;
        if (memory.exists(address)) begin
            data = memory[address];
        end else begin
            memory[address] = 'd0;
            data = 'd0; 
        end
        return data;
    endfunction

    //logic_32 memory_backdoor[logic_32];
    logic_256 memory_backdoor;
    //logic [DATA_WIDTH-1:0] memory_temp;
    logic [DATA_WIDTH*8-1:0] memory_temp;
    initial begin
        @(posedge clk);
        @(posedge clk);
        if(memory_backdoor.exists())begin
            memory_temp[DATA_WIDTH*8-1:0] = memory_backdoor;
        end
        else begin
            memory_temp[DATA_WIDTH*8-1:0] = 256'h0;
        end
    end

    initial begin
        $sformat(arg_parse_str, "%s=%%s", ARGPARSE_KEY);
        
        // memory initialize ===========================================================
        if($value$plusargs(arg_parse_str, code_path)) begin
            $readmemh(code_path, memory_backdoor);
            if($test$plusargs("DEBUG")) begin
                $display("print memory first 10 row parse from arg %s:", ARGPARSE_KEY);
                for(int i=0;i<10;i++) begin
                    $display("memory row[%0d] = %h" , i, read_memory(i));
                end
            end
        end else begin
            if(ALLOW_NO_HEX!=0) begin
                if($test$plusargs("DEBUG"))
                    $info("Missing required parameter +%s",ARGPARSE_KEY);
            end
            else begin
                $error("Missing required parameter +%s",ARGPARSE_KEY);
                $finish;
            end
        end

        // memory write handler ========================================================
        forever begin
            @(posedge clk)
            if(wr_en && en) begin
                tmp_data = read_memory(addr);
                for( int i=0;i<DATA_WIDTH/8;i=i+1)begin
                    if(wr_byte_en[i]) tmp_data[8*i+:8] = wr_data[8*i+:8];
                end
                memory[addr] <= tmp_data;
            end
        end
    end
    
    // memory read handler =========================================================
    initial begin
        forever begin
            @(posedge clk)            
            if(en && ~wr_en) begin
                rd_data <= read_memory(addr);
                ack_send_back <= req_send_back;
            end
        end
    end



    function new();
        //this.vif = vif;
        this.ref_mem_mbx  = new(2);
    endfunction

    typedef struct packed {
        logic [TXNID_WIDTH-1:0] txnid;
        logic [DATA_WIDTH-1:0]  data ;
    } ref_pld_t;
    typedef struct {
        mailbox #(ref_pld_t) mbx;  // 使用 mailbox 存储不同的 ref_pld
    } txn_mem_t;
    txn_mem_t mem_mbx_array[2**TXNID_WIDTH]; 
    task read_ref_mem(input bit [ADDR_WIDTH-1:0] addr,output bit [REQ_DATA_WIDTH-1:0] data  );
        forever begin
            //if(!mem_mbx.num()) begin
            up_transcation   up_trans;
            up_driver        up_drv;
            ref_pld_t        ref_pld;
            //ref_mem_mbx = new;
            up_drv.recv_trans(up_trans);
            ref_pld.data  = read_mem[up_trans.pld.addr.index];
            ref_pld.txnid = up_trans.pld.txnid;
            mem_mbx_array[up_trans.txnid].mbx.put(ref_pld);
            //ref_mem_mbx.put(ref_pld);    
        end
    endtask



    task get_ref_mem(input bit [TXNID_WIDTH-1:0] txnid, output ref_pld_t ref_pld);
    // 从对应的队列中取出数据
        mem_mbx_array[txnid].mbx.get(ref_pld);
    endtask


















































if(ref_mem_data.exists(addr)) begin 
                if(icache_cfg_ref_model.debug_en) $display("[DEBUG][REF_MODEL][%0t] data in ref mem",$time);        
                mem_                                     ;
                data   = ref_mem_data[addr];
            end
            else begin
                if(icache_cfg_ref_model.debug_en) $display("[DEBUG][REF_MODEL][%0t] data don't exist in ref mem",$time);
            end


    function new(input l1d_cfg icache_cfg_ref_model,input event ref_no_data_exist);
        this.icache_cfg_ref_model = icache_cfg_ref_model;
        this.ref_no_data_exist = ref_no_data_exist;
    endfunction

    function set_mbx(input mailbox ref_up_mbx,mailbox ref_scb_mbx,input mailbox ref_from_down_mbx,input mailbox ref_to_down_mbx);
        this.ref_scb_mbx       = ref_scb_mbx      ;
        this.ref_up_mbx        = ref_up_mbx       ;
        this.ref_from_down_mbx = ref_from_down_mbx;
        this.ref_to_down_mbx   = ref_to_down_mbx  ;
    endfunction


    task read_ref_mem(input bit [VERIF_ADDR_WIDTH-1:0] addr,output bit [REQ_DATA_WIDTH-1:0] data );
        if(ref_mem_data.exists(addr)) begin 
            if(icache_cfg_ref_model.debug_en) $display("[DEBUG][REF_MODEL][%0t] data in ref mem",$time)                                                ;
            data   = ref_mem_data[addr];
        end
        else begin
            if(icache_cfg_ref_model.debug_en) $display("[DEBUG][REF_MODEL][%0t] no data in ref mem,notify downstream sequence to generate",$time)      ;
            write_to_down(addr);       
            -> ref_no_data_exist  ;
            if(icache_cfg_ref_model.debug_en) $display("[DEBUG][REF_MODEL][%0t] trigger downstream seq",$time)   ; 
            wait(ref_mem_data.exists(addr));
            data   = ref_mem_data[addr]    ;    
        end
    endtask

endclass:ref_model