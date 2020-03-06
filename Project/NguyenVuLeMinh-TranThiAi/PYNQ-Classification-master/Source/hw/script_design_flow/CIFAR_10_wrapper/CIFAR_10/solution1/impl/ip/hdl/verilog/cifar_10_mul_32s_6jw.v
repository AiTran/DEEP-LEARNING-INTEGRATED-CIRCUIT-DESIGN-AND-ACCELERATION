// ==============================================================
// File generated on Mon Jan 06 15:37:45 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

(* use_dsp = "no" *) module cifar_10_mul_32s_6jw_Mul_LUT_2(a, b, p);
input[32 - 1 : 0] a; 
input[14 - 1 : 0] b; 
output[32 - 1 : 0] p;

assign p = $signed(a) * $signed({1'b0, b});
endmodule
`timescale 1 ns / 1 ps
module cifar_10_mul_32s_6jw(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



cifar_10_mul_32s_6jw_Mul_LUT_2 cifar_10_mul_32s_6jw_Mul_LUT_2_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

