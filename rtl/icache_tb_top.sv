//`timescale 1ns/1ps
//`timescale 1ns/1ps
module icache_tb_top(
        input logic clk,
        input logic rst_n
);
    import toy_pack::*;

    //logic                                        clk                         ;
    //logic                                        rst_n                       ;
    logic                                        prefetch_enable             ;

    //upstream txdat  out
    logic [ICACHE_UPSTREAM_DATA_WIDTH-1:0]       upstream_txdat_data         ; 
    logic                                        upstream_txdat_vld          ;
    logic                                        upstream_txdat_rdy          ; 
    logic [ICACHE_REQ_TXNID_WIDTH-1:0]           upstream_txdat_txnid        ;

    //upstream rxreq
    logic                                        upstream_rxreq_vld          ;
    logic                                        upstream_rxreq_rdy          ;
    pc_req_t                                     upstream_rxreq_pld          ;

    //downstream rxsnp
    logic                                        downstream_rxsnp_vld        ;
    logic                                        downstream_rxsnp_rdy        ;
    pc_req_t                                     downstream_rxsnp_pld        ;

    //downtream txreq
    logic                                        downstream_txreq_vld        ;
    logic                                        downstream_txreq_rdy        ;
    pc_req_t                                     downstream_txreq_pld        ;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           downstream_txreq_entry_id   ;

    //downstream txrsp
    logic                                        downstream_txrsp_vld        ;
    logic                                        downstream_txrsp_rdy        ;
    logic [ICACHE_REQ_OPCODE_WIDTH-1:0]          downstream_txrsp_opcode     ;
    
    //downstream rxdat  in
    logic                                        downstream_rxdat_vld        ;
    logic                                        downstream_rxdat_rdy        ;
    downstream_rxdat_t                           downstream_rxdat_pld        ;   

    //tb queue
    pc_req_t                                     up_req[$]               ;
    //pc_req_t                                     up_req_q[$]             ;
   
    pc_req_t                                     txreq                   ;
    //pc_req_t                                     txreq_q[$]              ;
    pc_req_t                                     txreq_q[$]              ;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           txreq_entry_id          ;
    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           txreq_entry_id_q[$]     ;
    int                                          rxdat_delay             ;
    int up_req_cnt=0, tx_dat_cnt=0,tx_req_cnt=0,rx_dat_cnt=0,input_file_size;
    int                                          file                    ;
    int                                          read_bytes              ;
    int                                          global_up_req_cnt = 0   ;
    int                                          local_up_req_cnt  = 0   ;
    int                                          local_tx_req_cnt  = 0   ;

    typedef struct packed {
        logic [ICACHE_TAG_WIDTH-1:0]    tag     ;
        logic [ICACHE_INDEX_WIDTH-1:0]  index   ;
        logic [ICACHE_OFFSET_WIDTH-1:0] offset  ;
    } addr_t;
    //addr_t  data_buffer    ;
    logic [31:0] data_buffer;
    //logic [7:0] data_buffer[4];
    addr_t  req;
    addr_t  up_req_q[$]             ;
    addr_t  upstream_rxreq ;
    
    assign prefetch_enable      = 1'b0;
    assign downstream_txreq_rdy = 1'b1;
    assign upstream_txdat_rdy   = 1'b1;
    initial begin
    	//clk = 0;
        upstream_rxreq_vld                = 0;
        downstream_rxsnp_vld              = 0;
    	//forever #10 clk = ~clk               ;
    end
//========================================================
// request
//========================================================
    task send_upstream_req(input int tag, int index, int id);
        @(posedge clk);
        @(posedge clk);
        upstream_rxreq_vld              = 1;
        upstream_rxreq_pld.addr.tag     = tag;
        upstream_rxreq_pld.addr.index   = index;
        upstream_rxreq_pld.addr.offset  = {ICACHE_OFFSET_WIDTH{1'b1}};
        upstream_rxreq_pld.opcode       = UPSTREAM_OPCODE;
        upstream_rxreq_pld.txnid        = id;
        $display("send_upstream_req: tag=%d, index=%d, id=%d", tag, index, id);
        do begin
            @(posedge clk);
        end while(upstream_rxreq_rdy!==1'b1);
        up_req.push_back(upstream_rxreq_pld);
        up_req_cnt++;
        upstream_rxreq_vld              = 0;
        upstream_rxreq_pld.addr.tag     = 0;
        upstream_rxreq_pld.addr.index   = 0;
        upstream_rxreq_pld.addr.offset  = 0;
        upstream_rxreq_pld.opcode       = 0;
        upstream_rxreq_pld.txnid        = 0;
        //end
    endtask

    //logic [31:0]up_req_q[0:1024];
    int up_req_tail=0;
    int up_req_head=0;

    //task push_up_req_q(input [31:0] data);
    //    if (up_req_tail < 1024) begin // 假设队列最大大小是 1024
    //        up_req_q[up_req_tail] = data;
    //        up_req_tail = up_req_tail + 1;
    //    end else begin
    //        $display("Queue is full!");
    //    end
    //endtask
    //task pop_up_req_q(output [31:0] data);
    //    if(up_req_head<up_req_tail)begin
    //        data = up_req_q[up_req_head];
    //        up_req_head = up_req_head+1;
    //    end
    //    else begin
    //        $display("Error:Queue is empty");
    //    end
    //endtask

//========================================================
// trace log 
//========================================================
    initial begin
        file = $fopen("/data/usr/xuemy/try/cache_v1/icache_v1_1008_release/trace_replay/hitrate_trace_20run.bin", "rb");
        if (file == 0) begin
            $display("Error: Cannot open file.");
            $finish;
        end
        while (!$feof(file)) begin
            read_bytes = $fread(data_buffer, file);
            if (read_bytes != 4) begin
                $display("Warning: Incomplete read, read %0d bytes.", read_bytes);
                break;
            end
            $display("Read 32-bit value: %h", data_buffer);
            //aadr_t req;
            req.tag =data_buffer[31:ICACHE_INDEX_WIDTH+ICACHE_OFFSET_WIDTH]  ;
            req.index =data_buffer[ICACHE_INDEX_WIDTH+ICACHE_OFFSET_WIDTH-1:ICACHE_OFFSET_WIDTH];
            req.offset = data_buffer[ICACHE_OFFSET_WIDTH-1:0];
            up_req_q.push_back(data_buffer);
            //push_up_req_q(data_buffer);
            //push_up_req_q(req);
            $display("upreq_q:");
        end

        $fclose(file);
    end
    //initial begin
    //    #10;
    //    $display("Queue size: %0d", up_req_tail-up_req_head);
    //    while(up_req_head < up_req_tail)begin
    //        pop_up_req_q(data_buffer);
    //        $display("Pop data: %h", data_buffer);
    //    end
    //    $finish;
    //end
//========================================================
// test case
//========================================================
    initial begin
        int testcase = 2;
        int delay       ;
        int tag         ;
        int index       ;
        int txnid       ;
        repeat(2)@(posedge clk);
        case(testcase)
            2:begin //trace replay
                $display("inputfilesize1111");
                //input_file_size = up_req_tail - up_req_head;
                input_file_size = up_req_q.size();
                $display("inputfilesize: %0d",input_file_size);
                for(int i=0; i<input_file_size; i++)begin
                    req = up_req_q.pop_front();
                    //pop_up_req_q(req);
                    $display("ADDR = %h",req );
                    tag             = req.tag;
                    index           = req.index;
                    txnid           = i%16;
                    @(posedge clk);
                    send_upstream_req(tag, index, txnid);
                    $display("data_buffer= %h, current size=%0d",data_buffer,up_req_q.size);
                    $display("send a up req, tag=%h, index=%h, id=%h, %t", tag,index,txnid, $realtime);
                    delay=$urandom_range(1,3);
                    repeat(delay)@(posedge clk);
                end
            end
        endcase
        repeat(25000)@(posedge clk);
        $finish;
    end


//========================================================
// rxdata gen
//========================================================
//pc_req_t txreq_q[1024];  // 队列大小固定为 1024
    //int txreq_tail = 0;      // 队列尾部
    //int txreq_head = 0;
    //task push_txreq_q(input pc_req_t data);
    //    if (txreq_tail < 1024) begin
    //        txreq_q[txreq_tail] = data;   // 插入数据
    //        txreq_tail = txreq_tail + 1;  // 更新队列尾指针
    //    end else begin
    //        $display("Queue is full!");
    //    end
    //endtask
    //logic [MSHR_ENTRY_INDEX_WIDTH-1:0] txreq_id_q[1024];
    //int txreq_id_tail=0;
    //int txreq_id_head=0;
    //task push_txreq_id(input logic [MSHR_ENTRY_INDEX_WIDTH-1:0] down_id);
    //    if (txreq_id_tail < 1024) begin
    //        txreq_id_q[txreq_tail] = down_id;   // 插入数据
    //        txreq_id_tail = txreq_id_tail + 1;  // 更新队列尾指针
    //    end else begin
    //        $display("Queue is full!");
    //    end
    //endtask
    initial begin
        forever begin
            @(posedge clk);
            if(downstream_txreq_vld===1)begin
                tx_req_cnt++;
                txreq_q.push_back(downstream_txreq_pld);
                //push_txreq_q(downstream_txreq_pld);
                txreq_entry_id_q.push_back(downstream_txreq_entry_id);
                //push_txreq_id(downstream_txreq_entry_id);
            end
        end
    end
initial begin
    forever begin
        @(posedge clk);
        if(txreq_q.size()>0)begin
        //if(txreq_tail>txreq_head)begin
                rxdat_delay     = $urandom_range(1, 3);
                repeat(rxdat_delay)@(posedge clk);
                txreq = txreq_q.pop_front();
                txreq_entry_id = txreq_entry_id_q.pop_front();
                //txreq = txreq_q[txreq_head];
                //txreq_entry_id = txreq_id_q[txreq_id_head];
                downstream_rxdat_vld                            = 1;
                downstream_rxdat_pld.downstream_rxdat_opcode    = txreq.opcode;
                downstream_rxdat_pld.downstream_rxdat_txnid     = txreq.txnid;
                downstream_rxdat_pld.downstream_rxdat_data      = txreq.addr;
                downstream_rxdat_pld.downstream_rxdat_entry_idx = txreq_entry_id;
                //$display("downstream_rxdat = %h   %t, nid=%0h,remain pkt=%0d",txreq.addr,$realtime,txreq.txnid,txreq_tail-txreq_head );
                $display("downstream_rxdat = %h   %t, nid=%0h,remain pkt=%0d",txreq.addr,$realtime,txreq.txnid,txreq_q.size);
                do begin
                    @(posedge clk);
                end while(downstream_rxdat_rdy!==1'b1);
                rx_dat_cnt++;
                downstream_rxdat_vld                            =   0;
                downstream_rxdat_pld.downstream_rxdat_opcode    = 'b0;
                downstream_rxdat_pld.downstream_rxdat_txnid     = 'b0;
                downstream_rxdat_pld.downstream_rxdat_data      = 'b0;
                downstream_rxdat_pld.downstream_rxdat_entry_idx = 'b0;           
        end
    end
end

//========================================================
// checker
//========================================================
    initial begin
        int  txnid_flag=0;
        //int  txdat_duration =0;
        forever begin
            //@(posedge upstream_txdat_vld);
            @(posedge clk);
            if(upstream_txdat_vld===1)begin
                tx_dat_cnt++;
                foreach(up_req[i])begin
                    if(up_req[i].txnid == upstream_txdat_txnid)begin
                        txnid_flag = 1;
                        //if(up_req[i].addr !== upstream_txdat_data)begin
                        //    $error("compare error when txnid=%0d",upstream_txdat_txnid);
                        //end else begin
                            $display("txnid %d compare pass",upstream_txdat_txnid);
                        //end
                        up_req.delete(i);
                    end
                end
                if(txnid_flag == 0)begin
                    $error("receive txnid=%0d error",upstream_txdat_txnid);
                end 
                else begin
                    txnid_flag = 0;
                end
            end
        end
    end

    icache_top  dut (
        .clk                      (clk                    ),
        .rst_n                    (rst_n                  ),
        .prefetch_enable          (prefetch_enable        ),
        .upstream_txdat_data      (upstream_txdat_data    ),
        .upstream_txdat_vld       (upstream_txdat_vld     ),
        //.upstream_txdat_rdy       (upstream_txdat_rdy     ),
        .upstream_txdat_txnid     (upstream_txdat_txnid   ),
        .upstream_rxreq_vld       (upstream_rxreq_vld     ),
        .upstream_rxreq_rdy       (upstream_rxreq_rdy     ),
        .upstream_rxreq_pld       (upstream_rxreq_pld     ),
        .downstream_rxsnp_vld     (downstream_rxsnp_vld   ),
        .downstream_rxsnp_rdy     (downstream_rxsnp_rdy   ),
        .downstream_rxsnp_pld     (downstream_rxsnp_pld   ),
        .downstream_txreq_vld     (downstream_txreq_vld   ),
        .downstream_txreq_rdy     (downstream_txreq_rdy   ),
        .downstream_txreq_pld     (downstream_txreq_pld   ),
        .downstream_txreq_entry_id(downstream_txreq_entry_id),
        //.downstream_txrsp_vld     (downstream_txrsp_vld   ),
        .downstream_txrsp_rdy     (downstream_txrsp_rdy   ),
        //.downstream_txrsp_opcode  (downstream_txrsp_opcode),
        .downstream_rxdat_vld     (downstream_rxdat_vld   ),
        .downstream_rxdat_rdy     (downstream_rxdat_rdy   ),
        .downstream_rxdat_pld     (downstream_rxdat_pld   ),
        .prefetch_req_vld         (1'b0                   ),
        .prefetch_req_pld         ('b0                    ),
        .pref_to_mshr_req_rdy     (pref_to_mshr_req_rdy));
		

//========================================================
// downstream txreq counter
//========================================================


endmodule

//module icache_tb_top(
//        input logic clk,
//        input logic rst_n
//);
//    import toy_pack::*;
//
//    //logic                                        clk                         ;
//    //logic                                        rst_n                       ;
//    logic                                        prefetch_enable             ;
//
//    //upstream txdat  out
//    logic [ICACHE_UPSTREAM_DATA_WIDTH-1:0]       upstream_txdat_data         ; 
//    logic                                        upstream_txdat_vld          ;
//    logic                                        upstream_txdat_rdy          ; 
//    logic [ICACHE_REQ_TXNID_WIDTH-1:0]           upstream_txdat_txnid        ;
//
//    //upstream rxreq
//    logic                                        upstream_rxreq_vld          ;
//    logic                                        upstream_rxreq_rdy          ;
//    pc_req_t                                     upstream_rxreq_pld          ;
//
//    //downstream rxsnp
//    logic                                        downstream_rxsnp_vld        ;
//    logic                                        downstream_rxsnp_rdy        ;
//    pc_req_t                                     downstream_rxsnp_pld        ;
//
//    //downtream txreq
//    logic                                        downstream_txreq_vld        ;
//    logic                                        downstream_txreq_rdy        ;
//    pc_req_t                                     downstream_txreq_pld        ;
//    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           downstream_txreq_entry_id   ;
//
//    //downstream txrsp
//    logic                                        downstream_txrsp_vld        ;
//    logic                                        downstream_txrsp_rdy        ;
//    logic [ICACHE_REQ_OPCODE_WIDTH-1:0]          downstream_txrsp_opcode     ;
//    
//    //downstream rxdat  in
//    logic                                        downstream_rxdat_vld        ;
//    logic                                        downstream_rxdat_rdy        ;
//    downstream_rxdat_t                           downstream_rxdat_pld        ;   
//
//    //tb queue
//    pc_req_t                                     up_req[$]               ;
//    //pc_req_t                                     up_req_q[$]             ;
//   
//    pc_req_t                                     txreq                   ;
//    //pc_req_t                                     txreq_q[$]              ;
//    pc_req_t                                     txreq_q[1024]              ;
//    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           txreq_entry_id          ;
//    logic [MSHR_ENTRY_INDEX_WIDTH-1:0]           txreq_entry_id_q[$]     ;
//    int                                          rxdat_delay             ;
//    int up_req_cnt=0, tx_dat_cnt=0,tx_req_cnt=0,rx_dat_cnt=0,input_file_size;
//    int                                          file                    ;
//    int                                          read_bytes              ;
//    int                                          global_up_req_cnt = 0   ;
//    int                                          local_up_req_cnt  = 0   ;
//    int                                          local_tx_req_cnt  = 0   ;
//
//    typedef struct packed {
//        logic [ICACHE_TAG_WIDTH-1:0]    tag     ;
//        logic [ICACHE_INDEX_WIDTH-1:0]  index   ;
//        logic [ICACHE_OFFSET_WIDTH-1:0] offset  ;
//    } addr_t;
//    //addr_t  data_buffer    ;
//    logic [31:0] data_buffer;
//    //logic [7:0] data_buffer[4];
//    addr_t  req;
//    //addr_t  up_req_q[$]             ;
//    addr_t  upstream_rxreq ;
//    
//    assign prefetch_enable      = 1'b0;
//    assign downstream_txreq_rdy = 1'b1;
//    assign upstream_txdat_rdy   = 1'b1;
//    initial begin
//    	//clk = 0;
//        upstream_rxreq_vld                = 0;
//        downstream_rxsnp_vld              = 0;
//    	//forever #10 clk = ~clk               ;
//    end
////========================================================
//// request
////========================================================
//    task send_upstream_req(input int tag, int index, int id);
//        @(posedge clk);
//        @(posedge clk);
//        upstream_rxreq_vld              = 1;
//        upstream_rxreq_pld.addr.tag     = tag;
//        upstream_rxreq_pld.addr.index   = index;
//        upstream_rxreq_pld.addr.offset  = {ICACHE_OFFSET_WIDTH{1'b1}};
//        upstream_rxreq_pld.opcode       = UPSTREAM_OPCODE;
//        upstream_rxreq_pld.txnid        = id;
//        $display("send_upstream_req: tag=%d, index=%d, id=%d", tag, index, id);
//        do begin
//            @(posedge clk);
//        end while(upstream_rxreq_rdy!==1'b1);
//        up_req.push_back(upstream_rxreq_pld);
//        up_req_cnt++;
//        upstream_rxreq_vld              = 0;
//        upstream_rxreq_pld.addr.tag     = 0;
//        upstream_rxreq_pld.addr.index   = 0;
//        upstream_rxreq_pld.addr.offset  = 0;
//        upstream_rxreq_pld.opcode       = 0;
//        upstream_rxreq_pld.txnid        = 0;
//        //end
//    endtask
//
//    logic [31:0]up_req_q[0:1024];
//    int up_req_tail=0;
//    int up_req_head=0;
//
//    task push_up_req_q(input [31:0] data);
//        if (up_req_tail < 1024) begin // 假设队列最大大小是 1024
//            up_req_q[up_req_tail] = data;
//            up_req_tail = up_req_tail + 1;
//        end else begin
//            $display("Queue is full!");
//        end
//    endtask
//    task pop_up_req_q(output [31:0] data);
//        if(up_req_head<up_req_tail)begin
//            data = up_req_q[up_req_head];
//            up_req_head = up_req_head+1;
//        end
//        else begin
//            $display("Error:Queue is empty");
//        end
//    endtask
//
////========================================================
//// trace log 
////========================================================
//    initial begin
//        file = $fopen("/data/usr/xuemy/try/cache_v1/icache_v1_1008_release/trace_replay/hitrate_trace_20run.bin", "rb");
//        if (file == 0) begin
//            $display("Error: Cannot open file.");
//            $finish;
//        end
//        while (!$feof(file)) begin
//            read_bytes = $fread(data_buffer, file);
//            if (read_bytes != 4) begin
//                $display("Warning: Incomplete read, read %0d bytes.", read_bytes);
//                break;
//            end
//            $display("Read 32-bit value: %h", data_buffer);
//            //aadr_t req;
//            req.tag =data_buffer[31:ICACHE_INDEX_WIDTH+ICACHE_OFFSET_WIDTH]  ;
//            req.index =data_buffer[ICACHE_INDEX_WIDTH+ICACHE_OFFSET_WIDTH-1:ICACHE_OFFSET_WIDTH];
//            req.offset = data_buffer[ICACHE_OFFSET_WIDTH-1:0];
//            //up_req_q.push_back(data_buffer);
//            //push_up_req_q(data_buffer);
//            push_up_req_q(req);
//            $display("upreq_q:");
//        end
//
//        $fclose(file);
//    end
//    initial begin
//        #10;
//        $display("Queue size: %0d", up_req_tail-up_req_head);
//        while(up_req_head < up_req_tail)begin
//            pop_up_req_q(data_buffer);
//            $display("Pop data: %h", data_buffer);
//        end
//        $finish;
//    end
////========================================================
//// test case
////========================================================
//    initial begin
//        int testcase = 2;
//        int delay       ;
//        int tag         ;
//        int index       ;
//        int txnid       ;
//        repeat(2)@(posedge clk);
//        case(testcase)
//            2:begin //trace replay
//                $display("inputfilesize1111");
//                input_file_size = up_req_tail - up_req_head;
//                $display("inputfilesize: %0d",input_file_size);
//                for(int i=0; i<input_file_size; i++)begin
//                    pop_up_req_q(req);
//                    $display("ADDR = %h",req );
//                    tag             = req.tag;
//                    index           = req.index;
//                    txnid           = i%16;
//                    @(posedge clk);
//                    send_upstream_req(tag, index, txnid);
//                    $display("data_buffer= %h, current size=%0d",data_buffer,up_req_tail-up_req_head);
//                    $display("send a up req, tag=%h, index=%h, id=%h, %t", tag,index,txnid, $realtime);
//                    delay=$urandom_range(1,3);
//                    repeat(delay)@(posedge clk);
//                end
//            end
//        endcase
//        repeat(25000)@(posedge clk);
//        $finish;
//    end
//
//
////========================================================
//// rxdata gen
////========================================================
////pc_req_t txreq_q[1024];  // 队列大小固定为 1024
//    int txreq_tail = 0;      // 队列尾部
//    int txreq_head = 0;
//    task push_txreq_q(input pc_req_t data);
//        if (txreq_tail < 1024) begin
//            txreq_q[txreq_tail] = data;   // 插入数据
//            txreq_tail = txreq_tail + 1;  // 更新队列尾指针
//        end else begin
//            $display("Queue is full!");
//        end
//    endtask
//    logic [MSHR_ENTRY_INDEX_WIDTH-1:0] txreq_id_q[1024];
//    int txreq_id_tail=0;
//    int txreq_id_head=0;
//    task push_txreq_id(input logic [MSHR_ENTRY_INDEX_WIDTH-1:0] down_id);
//        if (txreq_id_tail < 1024) begin
//            txreq_id_q[txreq_tail] = down_id;   // 插入数据
//            txreq_id_tail = txreq_id_tail + 1;  // 更新队列尾指针
//        end else begin
//            $display("Queue is full!");
//        end
//    endtask
//    initial begin
//        forever begin
//            @(posedge clk);
//            if(downstream_txreq_vld===1)begin
//                tx_req_cnt++;
//                //txreq_q.push_back(downstream_txreq_pld);
//                push_txreq_q(downstream_txreq_pld);
//                //txreq_entry_id_q.push_back(downstream_txreq_entry_id);
//                push_txreq_id(downstream_txreq_entry_id);
//            end
//        end
//    end
//initial begin
//    forever begin
//        @(posedge clk);
//        //if(txreq_q.size()>0)begin
//        if(txreq_tail>txreq_head)begin
//                rxdat_delay     = $urandom_range(1, 3);
//                repeat(rxdat_delay)@(posedge clk);
//                //txreq = txreq_q.pop_front();
//                txreq = txreq_q[txreq_head];
//                txreq_entry_id = txreq_id_q[txreq_id_head];
//                downstream_rxdat_vld                            = 1;
//                downstream_rxdat_pld.downstream_rxdat_opcode    = txreq.opcode;
//                downstream_rxdat_pld.downstream_rxdat_txnid     = txreq.txnid;
//                downstream_rxdat_pld.downstream_rxdat_data      = txreq.addr;
//                downstream_rxdat_pld.downstream_rxdat_entry_idx = txreq_entry_id;
//                $display("downstream_rxdat = %h   %t, nid=%0h,remain pkt=%0d",txreq.addr,$realtime,txreq.txnid,txreq_tail-txreq_head );
//                do begin
//                    @(posedge clk);
//                end while(downstream_rxdat_rdy!==1'b1);
//                rx_dat_cnt++;
//                downstream_rxdat_vld                            =   0;
//                downstream_rxdat_pld.downstream_rxdat_opcode    = 'b0;
//                downstream_rxdat_pld.downstream_rxdat_txnid     = 'b0;
//                downstream_rxdat_pld.downstream_rxdat_data      = 'b0;
//                downstream_rxdat_pld.downstream_rxdat_entry_idx = 'b0;           
//        end
//    end
//end
//
////========================================================
//// checker
////========================================================
//    initial begin
//        int  txnid_flag=0;
//        //int  txdat_duration =0;
//        forever begin
//            //@(posedge upstream_txdat_vld);
//            @(posedge clk);
//            if(upstream_txdat_vld===1)begin
//                tx_dat_cnt++;
//                foreach(up_req[i])begin
//                    if(up_req[i].txnid == upstream_txdat_txnid)begin
//                        txnid_flag = 1;
//                        if(up_req[i].addr !== upstream_txdat_data)begin
//                            $error("compare error when txnid=%0d",upstream_txdat_txnid);
//                        end else begin
//                            $display("txnid %d compare pass",upstream_txdat_txnid);
//                        end
//                        up_req.delete(i);
//                    end
//                end
//                if(txnid_flag == 0)begin
//                    $error("receive txnid=%0d error",upstream_txdat_txnid);
//                end 
//                else begin
//                    txnid_flag = 0;
//                end
//            end
//        end
//    end
//
//    icache_top  dut (
//        .clk                      (clk                    ),
//        .rst_n                    (rst_n                  ),
//        .prefetch_enable          (prefetch_enable        ),
//        .upstream_txdat_data      (upstream_txdat_data    ),
//        .upstream_txdat_vld       (upstream_txdat_vld     ),
//        //.upstream_txdat_rdy       (upstream_txdat_rdy     ),
//        .upstream_txdat_txnid     (upstream_txdat_txnid   ),
//        .upstream_rxreq_vld       (upstream_rxreq_vld     ),
//        .upstream_rxreq_rdy       (upstream_rxreq_rdy     ),
//        .upstream_rxreq_pld       (upstream_rxreq_pld     ),
//        .downstream_rxsnp_vld     (downstream_rxsnp_vld   ),
//        .downstream_rxsnp_rdy     (downstream_rxsnp_rdy   ),
//        .downstream_rxsnp_pld     (downstream_rxsnp_pld   ),
//        .downstream_txreq_vld     (downstream_txreq_vld   ),
//        .downstream_txreq_rdy     (downstream_txreq_rdy   ),
//        .downstream_txreq_pld     (downstream_txreq_pld   ),
//        .downstream_txreq_entry_id(downstream_txreq_entry_id),
//        //.downstream_txrsp_vld     (downstream_txrsp_vld   ),
//        .downstream_txrsp_rdy     (downstream_txrsp_rdy   ),
//        //.downstream_txrsp_opcode  (downstream_txrsp_opcode),
//        .downstream_rxdat_vld     (downstream_rxdat_vld   ),
//        .downstream_rxdat_rdy     (downstream_rxdat_rdy   ),
//        .downstream_rxdat_pld     (downstream_rxdat_pld   ),
//        .prefetch_req_vld         (1'b0                   ),
//        .prefetch_req_pld         ('b0                    ),
//        .pref_to_mshr_req_rdy     (pref_to_mshr_req_rdy));
//		
//
////========================================================
//// downstream txreq counter
////========================================================
//d
//
//
//endmodule
