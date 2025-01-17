// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pool_2u_32u_32u_s_HH_
#define _pool_2u_32u_32u_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cifar_10_mul_32s_bkb.h"
#include "pool_2u_32u_32u_s4jc.h"
#include "pool_2u_32u_32u_s5jm.h"

namespace ap_rtl {

struct pool_2u_32u_32u_s : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<32> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;


    // Module declarations
    pool_2u_32u_32u_s(sc_module_name name);
    SC_HAS_PROCESS(pool_2u_32u_32u_s);

    ~pool_2u_32u_32u_s();

    sc_trace_file* mVcdFile;

    pool_2u_32u_32u_s4jc* buf_U;
    pool_2u_32u_32u_s5jm* acc_U;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U56;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U57;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U58;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<68> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<32> > IFMCH_curr_1;
    sc_signal< sc_lv<32> > IFMDim_curr_1;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1511;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond1_reg_1479;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten4_reg_1568;
    sc_signal< sc_lv<1> > exitcond_flatten4_reg_1568_pp3_iter1_reg;
    sc_signal< sc_lv<32> > i3_reg_680;
    sc_signal< sc_lv<33> > indvar_flatten_reg_724;
    sc_signal< sc_lv<32> > ch_reg_735;
    sc_signal< sc_lv<6> > ch2_reg_746;
    sc_signal< sc_lv<63> > indvar_flatten4_reg_757;
    sc_signal< sc_lv<31> > outpix_reg_768;
    sc_signal< sc_lv<32> > outch_reg_779;
    sc_signal< sc_lv<32> > reg_790;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state64_pp1_stage1_iter0;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<32> > tmp_V_20_reg_1377;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<32> > tmp_V_22_reg_1382;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > tmp_V_24_reg_1388;
    sc_signal< bool > ap_block_state4;
    sc_signal< sc_lv<32> > tmp_V_28_reg_1393;
    sc_signal< bool > ap_block_state6;
    sc_signal< sc_lv<32> > tmp_V_30_reg_1400;
    sc_signal< bool > ap_block_state7;
    sc_signal< sc_lv<6> > j_2_fu_821_p2;
    sc_signal< sc_lv<6> > j_2_reg_1411;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > tmp_32_fu_827_p3;
    sc_signal< sc_lv<10> > tmp_32_reg_1416;
    sc_signal< sc_lv<1> > tmp_17_fu_815_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_840_p2;
    sc_signal< sc_lv<1> > tmp_18_reg_1435;
    sc_signal< sc_lv<32> > KER_size_0_fu_1056_p2;
    sc_signal< sc_lv<32> > KER_size_0_reg_1439;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_lv<31> > tmp_9_fu_1064_p4;
    sc_signal< sc_lv<31> > tmp_9_reg_1444;
    sc_signal< sc_lv<33> > tmp_64_fu_1074_p3;
    sc_signal< sc_lv<33> > tmp_64_reg_1449;
    sc_signal< sc_lv<32> > tmp_65_fu_1082_p3;
    sc_signal< sc_lv<32> > tmp_65_reg_1454;
    sc_signal< sc_lv<63> > bound3_fu_1098_p2;
    sc_signal< sc_lv<63> > bound3_reg_1459;
    sc_signal< sc_lv<63> > bound5_fu_1107_p2;
    sc_signal< sc_lv<63> > bound5_reg_1464;
    sc_signal< sc_lv<32> > KER_size_1_fu_1113_p2;
    sc_signal< sc_lv<32> > KER_size_1_reg_1469;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_lv<32> > KER_bound_fu_1117_p2;
    sc_signal< sc_lv<32> > KER_bound_reg_1474;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_lv<1> > exitcond1_fu_1121_p2;
    sc_signal< bool > ap_block_state58_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state59_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_1126_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<63> > indvar_flatten_next3_fu_1137_p2;
    sc_signal< sc_lv<63> > indvar_flatten_next3_reg_1491;
    sc_signal< sc_logic > ap_CS_fsm_state61;
    sc_signal< sc_lv<1> > exitcond_flatten8_fu_1143_p2;
    sc_signal< sc_logic > ap_CS_fsm_state62;
    sc_signal< sc_lv<32> > indvar_flatten_next7_fu_1148_p2;
    sc_signal< sc_lv<32> > indvar_flatten_next7_reg_1500;
    sc_signal< sc_lv<31> > xp_mid2_fu_1159_p3;
    sc_signal< sc_lv<31> > xp_mid2_reg_1505;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_1167_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state63_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state65_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<33> > indvar_flatten_next_fu_1172_p2;
    sc_signal< sc_lv<33> > indvar_flatten_next_reg_1515;
    sc_signal< sc_lv<32> > ch_mid2_fu_1184_p3;
    sc_signal< sc_lv<32> > ch_mid2_reg_1520;
    sc_signal< sc_lv<5> > acc_addr_8_reg_1526;
    sc_signal< sc_lv<32> > ch_3_fu_1196_p2;
    sc_signal< sc_lv<32> > ch_3_reg_1532;
    sc_signal< sc_lv<11> > tmp_70_fu_1216_p1;
    sc_signal< sc_lv<11> > tmp_70_reg_1537;
    sc_signal< sc_logic > ap_CS_fsm_state66;
    sc_signal< sc_lv<1> > tmp_26_fu_1219_p2;
    sc_signal< sc_lv<1> > tmp_26_reg_1542;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state67_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state68_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<6> > ch_4_fu_1225_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<9> > buf_addr_6_reg_1551;
    sc_signal< sc_lv<5> > acc_addr_7_reg_1557;
    sc_signal< sc_lv<31> > xp_2_fu_1273_p2;
    sc_signal< sc_logic > ap_CS_fsm_state69;
    sc_signal< sc_lv<1> > exitcond_flatten4_fu_1278_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< bool > ap_block_state70_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state71_pp3_stage0_iter1;
    sc_signal< bool > ap_block_state72_pp3_stage0_iter2;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<63> > indvar_flatten_next4_fu_1283_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<31> > tmp_22_mid2_v_fu_1309_p3;
    sc_signal< sc_lv<31> > tmp_22_mid2_v_reg_1577;
    sc_signal< sc_lv<9> > buf_addr_5_reg_1582;
    sc_signal< sc_lv<32> > outch_2_fu_1349_p2;
    sc_signal< sc_lv<31> > tmp_V_35_fu_1365_p3;
    sc_signal< sc_lv<31> > tmp_V_35_reg_1593;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state58;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state63;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state67;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state70;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< sc_lv<9> > buf_address0;
    sc_signal< sc_logic > buf_ce0;
    sc_signal< sc_lv<32> > buf_q0;
    sc_signal< sc_lv<9> > buf_address1;
    sc_signal< sc_logic > buf_ce1;
    sc_signal< sc_logic > buf_we1;
    sc_signal< sc_lv<32> > buf_d1;
    sc_signal< sc_lv<5> > acc_address0;
    sc_signal< sc_logic > acc_ce0;
    sc_signal< sc_lv<32> > acc_q0;
    sc_signal< sc_lv<5> > acc_address1;
    sc_signal< sc_logic > acc_ce1;
    sc_signal< sc_logic > acc_we1;
    sc_signal< sc_lv<32> > acc_d1;
    sc_signal< sc_lv<32> > IFMCH_curr_3_loc_reg_659;
    sc_signal< bool > ap_block_state8;
    sc_signal< sc_lv<1> > tmp_s_fu_794_p2;
    sc_signal< sc_lv<6> > j_reg_669;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<63> > indvar_flatten3_reg_691;
    sc_signal< sc_logic > ap_CS_fsm_state73;
    sc_signal< sc_lv<32> > indvar_flatten6_reg_702;
    sc_signal< sc_lv<1> > exitcond_flatten3_fu_1132_p2;
    sc_signal< sc_lv<31> > xp_reg_713;
    sc_signal< sc_lv<33> > ap_phi_mux_indvar_flatten_phi_fu_728_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<32> > ap_phi_mux_ch_phi_fu_739_p4;
    sc_signal< sc_lv<31> > ap_phi_mux_outpix_phi_fu_772_p4;
    sc_signal< sc_lv<64> > tmp_33_fu_835_p1;
    sc_signal< sc_lv<64> > tmp_35_fu_851_p3;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > tmp_37_fu_865_p3;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > tmp_39_fu_879_p3;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<64> > tmp_41_fu_893_p3;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_43_fu_907_p3;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > tmp_45_fu_921_p3;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<64> > tmp_47_fu_935_p3;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > tmp_49_fu_949_p3;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > tmp_51_fu_963_p3;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<64> > tmp_53_fu_977_p3;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > tmp_55_fu_991_p3;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > tmp_57_fu_1005_p3;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<64> > tmp_59_fu_1019_p3;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > tmp_61_fu_1033_p3;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<64> > tmp_63_fu_1047_p3;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_lv<64> > tmp_25_fu_1192_p1;
    sc_signal< sc_lv<64> > tmp_74_cast_fu_1253_p1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<64> > tmp_28_fu_1231_p1;
    sc_signal< sc_lv<64> > tmp_71_cast_fu_1344_p1;
    sc_signal< sc_lv<64> > tmp_21_fu_1321_p1;
    sc_signal< bool > ap_block_state5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > tmp_V_1_fu_1373_p1;
    sc_signal< bool > ap_block_pp3_stage0_01001;
    sc_signal< sc_lv<32> > tmp_30_fu_1264_p3;
    sc_signal< sc_lv<32> > acc_load_2_valIn_V_fu_1207_p3;
    sc_signal< sc_lv<10> > tmp_34_fu_846_p2;
    sc_signal< sc_lv<10> > tmp_36_fu_860_p2;
    sc_signal< sc_lv<10> > tmp_38_fu_874_p2;
    sc_signal< sc_lv<10> > tmp_40_fu_888_p2;
    sc_signal< sc_lv<10> > tmp_42_fu_902_p2;
    sc_signal< sc_lv<10> > tmp_44_fu_916_p2;
    sc_signal< sc_lv<10> > tmp_46_fu_930_p2;
    sc_signal< sc_lv<10> > tmp_48_fu_944_p2;
    sc_signal< sc_lv<10> > tmp_50_fu_958_p2;
    sc_signal< sc_lv<10> > tmp_52_fu_972_p2;
    sc_signal< sc_lv<10> > tmp_54_fu_986_p2;
    sc_signal< sc_lv<10> > tmp_56_fu_1000_p2;
    sc_signal< sc_lv<10> > tmp_58_fu_1014_p2;
    sc_signal< sc_lv<10> > tmp_60_fu_1028_p2;
    sc_signal< sc_lv<10> > tmp_62_fu_1042_p2;
    sc_signal< sc_lv<31> > bound3_fu_1098_p0;
    sc_signal< sc_lv<63> > cast9_fu_1090_p1;
    sc_signal< sc_lv<32> > bound3_fu_1098_p1;
    sc_signal< sc_lv<32> > bound5_fu_1107_p0;
    sc_signal< sc_lv<31> > bound5_fu_1107_p1;
    sc_signal< sc_lv<1> > exitcond_fu_1154_p2;
    sc_signal< sc_lv<1> > exitcond4_fu_1178_p2;
    sc_signal< sc_lv<1> > tmp_31_fu_1201_p2;
    sc_signal< sc_lv<10> > tmp_71_fu_1236_p3;
    sc_signal< sc_lv<11> > tmp_73_cast_fu_1244_p1;
    sc_signal< sc_lv<11> > tmp_72_fu_1248_p2;
    sc_signal< sc_lv<1> > tmp_29_fu_1258_p2;
    sc_signal< sc_lv<1> > exitcond3_fu_1295_p2;
    sc_signal< sc_lv<31> > outpix_2_fu_1289_p2;
    sc_signal< sc_lv<32> > outch_mid2_fu_1301_p3;
    sc_signal< sc_lv<7> > tmp_67_fu_1326_p1;
    sc_signal< sc_lv<11> > tmp_70_cast_fu_1330_p3;
    sc_signal< sc_lv<11> > tmp_66_fu_1317_p1;
    sc_signal< sc_lv<11> > tmp_68_fu_1338_p2;
    sc_signal< sc_lv<1> > tmp_22_fu_1359_p2;
    sc_signal< sc_lv<31> > tmp_69_fu_1355_p1;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_lv<68> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_lv<63> > bound3_fu_1098_p10;
    sc_signal< sc_lv<63> > bound5_fu_1107_p00;
    sc_signal< bool > ap_condition_521;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<68> ap_ST_fsm_state1;
    static const sc_lv<68> ap_ST_fsm_state2;
    static const sc_lv<68> ap_ST_fsm_state3;
    static const sc_lv<68> ap_ST_fsm_state4;
    static const sc_lv<68> ap_ST_fsm_state5;
    static const sc_lv<68> ap_ST_fsm_state6;
    static const sc_lv<68> ap_ST_fsm_state7;
    static const sc_lv<68> ap_ST_fsm_state8;
    static const sc_lv<68> ap_ST_fsm_state9;
    static const sc_lv<68> ap_ST_fsm_state10;
    static const sc_lv<68> ap_ST_fsm_state11;
    static const sc_lv<68> ap_ST_fsm_state12;
    static const sc_lv<68> ap_ST_fsm_state13;
    static const sc_lv<68> ap_ST_fsm_state14;
    static const sc_lv<68> ap_ST_fsm_state15;
    static const sc_lv<68> ap_ST_fsm_state16;
    static const sc_lv<68> ap_ST_fsm_state17;
    static const sc_lv<68> ap_ST_fsm_state18;
    static const sc_lv<68> ap_ST_fsm_state19;
    static const sc_lv<68> ap_ST_fsm_state20;
    static const sc_lv<68> ap_ST_fsm_state21;
    static const sc_lv<68> ap_ST_fsm_state22;
    static const sc_lv<68> ap_ST_fsm_state23;
    static const sc_lv<68> ap_ST_fsm_state24;
    static const sc_lv<68> ap_ST_fsm_state25;
    static const sc_lv<68> ap_ST_fsm_state26;
    static const sc_lv<68> ap_ST_fsm_state27;
    static const sc_lv<68> ap_ST_fsm_state28;
    static const sc_lv<68> ap_ST_fsm_state29;
    static const sc_lv<68> ap_ST_fsm_state30;
    static const sc_lv<68> ap_ST_fsm_state31;
    static const sc_lv<68> ap_ST_fsm_state32;
    static const sc_lv<68> ap_ST_fsm_state33;
    static const sc_lv<68> ap_ST_fsm_state34;
    static const sc_lv<68> ap_ST_fsm_state35;
    static const sc_lv<68> ap_ST_fsm_state36;
    static const sc_lv<68> ap_ST_fsm_state37;
    static const sc_lv<68> ap_ST_fsm_state38;
    static const sc_lv<68> ap_ST_fsm_state39;
    static const sc_lv<68> ap_ST_fsm_state40;
    static const sc_lv<68> ap_ST_fsm_state41;
    static const sc_lv<68> ap_ST_fsm_state42;
    static const sc_lv<68> ap_ST_fsm_state43;
    static const sc_lv<68> ap_ST_fsm_state44;
    static const sc_lv<68> ap_ST_fsm_state45;
    static const sc_lv<68> ap_ST_fsm_state46;
    static const sc_lv<68> ap_ST_fsm_state47;
    static const sc_lv<68> ap_ST_fsm_state48;
    static const sc_lv<68> ap_ST_fsm_state49;
    static const sc_lv<68> ap_ST_fsm_state50;
    static const sc_lv<68> ap_ST_fsm_state51;
    static const sc_lv<68> ap_ST_fsm_state52;
    static const sc_lv<68> ap_ST_fsm_state53;
    static const sc_lv<68> ap_ST_fsm_state54;
    static const sc_lv<68> ap_ST_fsm_state55;
    static const sc_lv<68> ap_ST_fsm_state56;
    static const sc_lv<68> ap_ST_fsm_state57;
    static const sc_lv<68> ap_ST_fsm_pp0_stage0;
    static const sc_lv<68> ap_ST_fsm_state60;
    static const sc_lv<68> ap_ST_fsm_state61;
    static const sc_lv<68> ap_ST_fsm_state62;
    static const sc_lv<68> ap_ST_fsm_pp1_stage0;
    static const sc_lv<68> ap_ST_fsm_pp1_stage1;
    static const sc_lv<68> ap_ST_fsm_state66;
    static const sc_lv<68> ap_ST_fsm_pp2_stage0;
    static const sc_lv<68> ap_ST_fsm_state69;
    static const sc_lv<68> ap_ST_fsm_pp3_stage0;
    static const sc_lv<68> ap_ST_fsm_state73;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_3E;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_41;
    static const sc_lv<32> ap_const_lv32_42;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_43;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<33> ap_const_lv33_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<32> ap_const_lv32_FFF0BDC1;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<10> ap_const_lv10_7;
    static const sc_lv<10> ap_const_lv10_8;
    static const sc_lv<10> ap_const_lv10_9;
    static const sc_lv<10> ap_const_lv10_A;
    static const sc_lv<10> ap_const_lv10_B;
    static const sc_lv<10> ap_const_lv10_C;
    static const sc_lv<10> ap_const_lv10_D;
    static const sc_lv<10> ap_const_lv10_E;
    static const sc_lv<10> ap_const_lv10_F;
    static const sc_lv<63> ap_const_lv63_1;
    static const sc_lv<33> ap_const_lv33_1;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_3A;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_address0();
    void thread_acc_address1();
    void thread_acc_ce0();
    void thread_acc_ce1();
    void thread_acc_d1();
    void thread_acc_load_2_valIn_V_fu_1207_p3();
    void thread_acc_we1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state61();
    void thread_ap_CS_fsm_state62();
    void thread_ap_CS_fsm_state66();
    void thread_ap_CS_fsm_state69();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state73();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp3_stage0();
    void thread_ap_block_pp3_stage0_01001();
    void thread_ap_block_pp3_stage0_11001();
    void thread_ap_block_pp3_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state3();
    void thread_ap_block_state4();
    void thread_ap_block_state5();
    void thread_ap_block_state58_pp0_stage0_iter0();
    void thread_ap_block_state59_pp0_stage0_iter1();
    void thread_ap_block_state6();
    void thread_ap_block_state63_pp1_stage0_iter0();
    void thread_ap_block_state64_pp1_stage1_iter0();
    void thread_ap_block_state65_pp1_stage0_iter1();
    void thread_ap_block_state67_pp2_stage0_iter0();
    void thread_ap_block_state68_pp2_stage0_iter1();
    void thread_ap_block_state7();
    void thread_ap_block_state70_pp3_stage0_iter0();
    void thread_ap_block_state71_pp3_stage0_iter1();
    void thread_ap_block_state72_pp3_stage0_iter2();
    void thread_ap_block_state8();
    void thread_ap_condition_521();
    void thread_ap_condition_pp0_exit_iter0_state58();
    void thread_ap_condition_pp1_exit_iter0_state63();
    void thread_ap_condition_pp2_exit_iter0_state67();
    void thread_ap_condition_pp3_exit_iter0_state70();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_phi_mux_ch_phi_fu_739_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_728_p4();
    void thread_ap_phi_mux_outpix_phi_fu_772_p4();
    void thread_ap_ready();
    void thread_bound3_fu_1098_p0();
    void thread_bound3_fu_1098_p1();
    void thread_bound3_fu_1098_p10();
    void thread_bound3_fu_1098_p2();
    void thread_bound5_fu_1107_p0();
    void thread_bound5_fu_1107_p00();
    void thread_bound5_fu_1107_p1();
    void thread_bound5_fu_1107_p2();
    void thread_buf_address0();
    void thread_buf_address1();
    void thread_buf_ce0();
    void thread_buf_ce1();
    void thread_buf_d1();
    void thread_buf_we1();
    void thread_cast9_fu_1090_p1();
    void thread_ch_3_fu_1196_p2();
    void thread_ch_4_fu_1225_p2();
    void thread_ch_mid2_fu_1184_p3();
    void thread_exitcond1_fu_1121_p2();
    void thread_exitcond3_fu_1295_p2();
    void thread_exitcond4_fu_1178_p2();
    void thread_exitcond_flatten3_fu_1132_p2();
    void thread_exitcond_flatten4_fu_1278_p2();
    void thread_exitcond_flatten8_fu_1143_p2();
    void thread_exitcond_flatten_fu_1167_p2();
    void thread_exitcond_fu_1154_p2();
    void thread_i_fu_1126_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_indvar_flatten_next3_fu_1137_p2();
    void thread_indvar_flatten_next4_fu_1283_p2();
    void thread_indvar_flatten_next7_fu_1148_p2();
    void thread_indvar_flatten_next_fu_1172_p2();
    void thread_internal_ap_ready();
    void thread_j_2_fu_821_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_outch_2_fu_1349_p2();
    void thread_outch_mid2_fu_1301_p3();
    void thread_outpix_2_fu_1289_p2();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_17_fu_815_p2();
    void thread_tmp_18_fu_840_p2();
    void thread_tmp_21_fu_1321_p1();
    void thread_tmp_22_fu_1359_p2();
    void thread_tmp_22_mid2_v_fu_1309_p3();
    void thread_tmp_25_fu_1192_p1();
    void thread_tmp_26_fu_1219_p2();
    void thread_tmp_28_fu_1231_p1();
    void thread_tmp_29_fu_1258_p2();
    void thread_tmp_30_fu_1264_p3();
    void thread_tmp_31_fu_1201_p2();
    void thread_tmp_32_fu_827_p3();
    void thread_tmp_33_fu_835_p1();
    void thread_tmp_34_fu_846_p2();
    void thread_tmp_35_fu_851_p3();
    void thread_tmp_36_fu_860_p2();
    void thread_tmp_37_fu_865_p3();
    void thread_tmp_38_fu_874_p2();
    void thread_tmp_39_fu_879_p3();
    void thread_tmp_40_fu_888_p2();
    void thread_tmp_41_fu_893_p3();
    void thread_tmp_42_fu_902_p2();
    void thread_tmp_43_fu_907_p3();
    void thread_tmp_44_fu_916_p2();
    void thread_tmp_45_fu_921_p3();
    void thread_tmp_46_fu_930_p2();
    void thread_tmp_47_fu_935_p3();
    void thread_tmp_48_fu_944_p2();
    void thread_tmp_49_fu_949_p3();
    void thread_tmp_50_fu_958_p2();
    void thread_tmp_51_fu_963_p3();
    void thread_tmp_52_fu_972_p2();
    void thread_tmp_53_fu_977_p3();
    void thread_tmp_54_fu_986_p2();
    void thread_tmp_55_fu_991_p3();
    void thread_tmp_56_fu_1000_p2();
    void thread_tmp_57_fu_1005_p3();
    void thread_tmp_58_fu_1014_p2();
    void thread_tmp_59_fu_1019_p3();
    void thread_tmp_60_fu_1028_p2();
    void thread_tmp_61_fu_1033_p3();
    void thread_tmp_62_fu_1042_p2();
    void thread_tmp_63_fu_1047_p3();
    void thread_tmp_64_fu_1074_p3();
    void thread_tmp_65_fu_1082_p3();
    void thread_tmp_66_fu_1317_p1();
    void thread_tmp_67_fu_1326_p1();
    void thread_tmp_68_fu_1338_p2();
    void thread_tmp_69_fu_1355_p1();
    void thread_tmp_70_cast_fu_1330_p3();
    void thread_tmp_70_fu_1216_p1();
    void thread_tmp_71_cast_fu_1344_p1();
    void thread_tmp_71_fu_1236_p3();
    void thread_tmp_72_fu_1248_p2();
    void thread_tmp_73_cast_fu_1244_p1();
    void thread_tmp_74_cast_fu_1253_p1();
    void thread_tmp_9_fu_1064_p4();
    void thread_tmp_V_1_fu_1373_p1();
    void thread_tmp_V_35_fu_1365_p3();
    void thread_tmp_s_fu_794_p2();
    void thread_xp_2_fu_1273_p2();
    void thread_xp_mid2_fu_1159_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
