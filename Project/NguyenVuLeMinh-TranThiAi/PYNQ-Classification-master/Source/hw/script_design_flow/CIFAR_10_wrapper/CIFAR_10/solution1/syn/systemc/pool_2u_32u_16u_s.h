// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pool_2u_32u_16u_s_HH_
#define _pool_2u_32u_16u_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cifar_10_mul_32s_bkb.h"
#include "pool_2u_32u_16u_sbVr.h"
#include "pool_2u_32u_32u_s5jm.h"

namespace ap_rtl {

struct pool_2u_32u_16u_s : public sc_module {
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
    pool_2u_32u_16u_s(sc_module_name name);
    SC_HAS_PROCESS(pool_2u_32u_16u_s);

    ~pool_2u_32u_16u_s();

    sc_trace_file* mVcdFile;

    pool_2u_32u_16u_sbVr* buf_U;
    pool_2u_32u_32u_s5jm* acc_U;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U103;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U104;
    cifar_10_mul_32s_bkb<1,1,32,32,32>* cifar_10_mul_32s_bkb_U105;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<60> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<32> > IFMCH_curr_2;
    sc_signal< sc_lv<32> > IFMDim_curr_2;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond1_reg_1265;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten6_reg_1352;
    sc_signal< sc_lv<32> > i3_reg_608;
    sc_signal< sc_lv<6> > ch2_reg_674;
    sc_signal< sc_lv<63> > indvar_flatten7_reg_685;
    sc_signal< sc_lv<31> > outpix_reg_696;
    sc_signal< sc_lv<32> > outch_reg_707;
    sc_signal< sc_lv<32> > tmp_V_reg_1165;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > tmp_V_39_reg_1171;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<32> > tmp_V_41_reg_1176;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > tmp_V_43_reg_1182;
    sc_signal< bool > ap_block_state4;
    sc_signal< sc_lv<32> > tmp_V_47_reg_1187;
    sc_signal< bool > ap_block_state6;
    sc_signal< sc_lv<32> > tmp_V_49_reg_1194;
    sc_signal< bool > ap_block_state7;
    sc_signal< sc_lv<6> > j_3_fu_744_p2;
    sc_signal< sc_lv<6> > j_3_reg_1205;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<9> > tmp_73_fu_750_p3;
    sc_signal< sc_lv<9> > tmp_73_reg_1210;
    sc_signal< sc_lv<1> > tmp_32_fu_738_p2;
    sc_signal< sc_lv<1> > tmp_33_fu_763_p2;
    sc_signal< sc_lv<1> > tmp_33_reg_1221;
    sc_signal< sc_lv<32> > KER_size_0_fu_866_p2;
    sc_signal< sc_lv<32> > KER_size_0_reg_1225;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_lv<31> > tmp_12_fu_874_p4;
    sc_signal< sc_lv<31> > tmp_12_reg_1230;
    sc_signal< sc_lv<33> > tmp_89_fu_884_p3;
    sc_signal< sc_lv<33> > tmp_89_reg_1235;
    sc_signal< sc_lv<32> > tmp_90_fu_892_p3;
    sc_signal< sc_lv<32> > tmp_90_reg_1240;
    sc_signal< sc_lv<63> > bound6_fu_908_p2;
    sc_signal< sc_lv<63> > bound6_reg_1245;
    sc_signal< sc_lv<63> > bound7_fu_917_p2;
    sc_signal< sc_lv<63> > bound7_reg_1250;
    sc_signal< sc_lv<32> > KER_size_1_fu_923_p2;
    sc_signal< sc_lv<32> > KER_size_1_reg_1255;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<32> > KER_bound_fu_927_p2;
    sc_signal< sc_lv<32> > KER_bound_reg_1260;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_lv<1> > exitcond1_fu_931_p2;
    sc_signal< bool > ap_block_state50_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state51_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_936_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<63> > indvar_flatten_next5_fu_947_p2;
    sc_signal< sc_lv<63> > indvar_flatten_next5_reg_1277;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<1> > exitcond_flatten8_fu_953_p2;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_lv<32> > indvar_flatten_next7_fu_958_p2;
    sc_signal< sc_lv<32> > indvar_flatten_next7_reg_1286;
    sc_signal< sc_lv<31> > xp_mid2_fu_969_p3;
    sc_signal< sc_lv<31> > xp_mid2_reg_1291;
    sc_signal< sc_lv<33> > indvar_flatten_next_fu_982_p2;
    sc_signal< sc_lv<33> > indvar_flatten_next_reg_1300;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_lv<32> > ch_mid2_fu_994_p3;
    sc_signal< sc_lv<32> > ch_mid2_reg_1305;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_977_p2;
    sc_signal< sc_lv<5> > acc_addr_12_reg_1310;
    sc_signal< sc_lv<32> > ch_6_fu_1014_p2;
    sc_signal< sc_lv<10> > tmp_92_fu_1019_p1;
    sc_signal< sc_lv<10> > tmp_92_reg_1321;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_lv<1> > tmp_42_fu_1022_p2;
    sc_signal< sc_lv<1> > tmp_42_reg_1326;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state58_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state59_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<6> > ch_5_fu_1028_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<8> > buf_addr_9_reg_1335;
    sc_signal< sc_lv<5> > acc_addr_11_reg_1341;
    sc_signal< sc_lv<31> > xp_3_fu_1068_p2;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_lv<1> > exitcond_flatten6_fu_1073_p2;
    sc_signal< bool > ap_block_state61_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state62_pp3_stage0_iter1;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<63> > indvar_flatten_next6_fu_1078_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<31> > tmp_38_mid2_v_fu_1104_p3;
    sc_signal< sc_lv<31> > tmp_38_mid2_v_reg_1361;
    sc_signal< sc_lv<8> > buf_addr_8_reg_1366;
    sc_signal< sc_lv<32> > outch_3_fu_1144_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state50;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state58;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state61;
    sc_signal< sc_lv<8> > buf_address0;
    sc_signal< sc_logic > buf_ce0;
    sc_signal< sc_lv<32> > buf_q0;
    sc_signal< sc_lv<8> > buf_address1;
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
    sc_signal< sc_lv<32> > IFMCH_curr_2_loc_reg_587;
    sc_signal< bool > ap_block_state8;
    sc_signal< sc_lv<1> > tmp_s_fu_718_p2;
    sc_signal< sc_lv<6> > j_reg_597;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<63> > indvar_flatten5_reg_619;
    sc_signal< sc_logic > ap_CS_fsm_state63;
    sc_signal< sc_lv<32> > indvar_flatten6_reg_630;
    sc_signal< sc_lv<1> > exitcond_flatten5_fu_942_p2;
    sc_signal< sc_lv<31> > xp_reg_641;
    sc_signal< sc_lv<33> > indvar_flatten_reg_652;
    sc_signal< sc_lv<32> > ch_reg_663;
    sc_signal< sc_lv<31> > ap_phi_mux_outpix_phi_fu_700_p4;
    sc_signal< sc_lv<64> > tmp_74_fu_758_p1;
    sc_signal< sc_lv<64> > tmp_76_fu_773_p3;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > tmp_78_fu_787_p3;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > tmp_80_fu_801_p3;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<64> > tmp_82_fu_815_p3;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_84_fu_829_p3;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > tmp_86_fu_843_p3;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<64> > tmp_88_fu_857_p3;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
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
    sc_signal< sc_lv<64> > tmp_39_fu_1002_p1;
    sc_signal< sc_lv<64> > tmp_100_cast_fu_1056_p1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<64> > tmp_43_fu_1034_p1;
    sc_signal< sc_lv<64> > tmp_96_cast_fu_1139_p1;
    sc_signal< sc_lv<64> > tmp_36_fu_1116_p1;
    sc_signal< bool > ap_block_state5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > tmp_V_2_fu_1160_p1;
    sc_signal< bool > ap_block_pp3_stage0_01001;
    sc_signal< sc_lv<32> > tmp_44_fu_1061_p2;
    sc_signal< sc_lv<32> > tmp_40_fu_1007_p2;
    sc_signal< sc_lv<9> > tmp_75_fu_768_p2;
    sc_signal< sc_lv<9> > tmp_77_fu_782_p2;
    sc_signal< sc_lv<9> > tmp_79_fu_796_p2;
    sc_signal< sc_lv<9> > tmp_81_fu_810_p2;
    sc_signal< sc_lv<9> > tmp_83_fu_824_p2;
    sc_signal< sc_lv<9> > tmp_85_fu_838_p2;
    sc_signal< sc_lv<9> > tmp_87_fu_852_p2;
    sc_signal< sc_lv<31> > bound6_fu_908_p0;
    sc_signal< sc_lv<63> > cast9_fu_900_p1;
    sc_signal< sc_lv<32> > bound6_fu_908_p1;
    sc_signal< sc_lv<32> > bound7_fu_917_p0;
    sc_signal< sc_lv<31> > bound7_fu_917_p1;
    sc_signal< sc_lv<1> > exitcond_fu_964_p2;
    sc_signal< sc_lv<1> > exitcond6_fu_988_p2;
    sc_signal< sc_lv<9> > tmp_93_fu_1039_p3;
    sc_signal< sc_lv<10> > tmp_99_cast_fu_1047_p1;
    sc_signal< sc_lv<10> > tmp_94_fu_1051_p2;
    sc_signal< sc_lv<1> > exitcond5_fu_1090_p2;
    sc_signal< sc_lv<31> > outpix_3_fu_1084_p2;
    sc_signal< sc_lv<32> > outch_mid2_fu_1096_p3;
    sc_signal< sc_lv<7> > tmp_72_fu_1121_p1;
    sc_signal< sc_lv<10> > tmp_95_cast_fu_1125_p3;
    sc_signal< sc_lv<10> > tmp_71_fu_1112_p1;
    sc_signal< sc_lv<10> > tmp_91_fu_1133_p2;
    sc_signal< sc_lv<30> > tmp_V_s_fu_1150_p4;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_lv<60> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_lv<63> > bound6_fu_908_p10;
    sc_signal< sc_lv<63> > bound7_fu_917_p00;
    sc_signal< bool > ap_condition_460;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<60> ap_ST_fsm_state1;
    static const sc_lv<60> ap_ST_fsm_state2;
    static const sc_lv<60> ap_ST_fsm_state3;
    static const sc_lv<60> ap_ST_fsm_state4;
    static const sc_lv<60> ap_ST_fsm_state5;
    static const sc_lv<60> ap_ST_fsm_state6;
    static const sc_lv<60> ap_ST_fsm_state7;
    static const sc_lv<60> ap_ST_fsm_state8;
    static const sc_lv<60> ap_ST_fsm_state9;
    static const sc_lv<60> ap_ST_fsm_state10;
    static const sc_lv<60> ap_ST_fsm_state11;
    static const sc_lv<60> ap_ST_fsm_state12;
    static const sc_lv<60> ap_ST_fsm_state13;
    static const sc_lv<60> ap_ST_fsm_state14;
    static const sc_lv<60> ap_ST_fsm_state15;
    static const sc_lv<60> ap_ST_fsm_state16;
    static const sc_lv<60> ap_ST_fsm_state17;
    static const sc_lv<60> ap_ST_fsm_state18;
    static const sc_lv<60> ap_ST_fsm_state19;
    static const sc_lv<60> ap_ST_fsm_state20;
    static const sc_lv<60> ap_ST_fsm_state21;
    static const sc_lv<60> ap_ST_fsm_state22;
    static const sc_lv<60> ap_ST_fsm_state23;
    static const sc_lv<60> ap_ST_fsm_state24;
    static const sc_lv<60> ap_ST_fsm_state25;
    static const sc_lv<60> ap_ST_fsm_state26;
    static const sc_lv<60> ap_ST_fsm_state27;
    static const sc_lv<60> ap_ST_fsm_state28;
    static const sc_lv<60> ap_ST_fsm_state29;
    static const sc_lv<60> ap_ST_fsm_state30;
    static const sc_lv<60> ap_ST_fsm_state31;
    static const sc_lv<60> ap_ST_fsm_state32;
    static const sc_lv<60> ap_ST_fsm_state33;
    static const sc_lv<60> ap_ST_fsm_state34;
    static const sc_lv<60> ap_ST_fsm_state35;
    static const sc_lv<60> ap_ST_fsm_state36;
    static const sc_lv<60> ap_ST_fsm_state37;
    static const sc_lv<60> ap_ST_fsm_state38;
    static const sc_lv<60> ap_ST_fsm_state39;
    static const sc_lv<60> ap_ST_fsm_state40;
    static const sc_lv<60> ap_ST_fsm_state41;
    static const sc_lv<60> ap_ST_fsm_state42;
    static const sc_lv<60> ap_ST_fsm_state43;
    static const sc_lv<60> ap_ST_fsm_state44;
    static const sc_lv<60> ap_ST_fsm_state45;
    static const sc_lv<60> ap_ST_fsm_state46;
    static const sc_lv<60> ap_ST_fsm_state47;
    static const sc_lv<60> ap_ST_fsm_state48;
    static const sc_lv<60> ap_ST_fsm_state49;
    static const sc_lv<60> ap_ST_fsm_pp0_stage0;
    static const sc_lv<60> ap_ST_fsm_state52;
    static const sc_lv<60> ap_ST_fsm_state53;
    static const sc_lv<60> ap_ST_fsm_state54;
    static const sc_lv<60> ap_ST_fsm_state55;
    static const sc_lv<60> ap_ST_fsm_state56;
    static const sc_lv<60> ap_ST_fsm_state57;
    static const sc_lv<60> ap_ST_fsm_pp2_stage0;
    static const sc_lv<60> ap_ST_fsm_state60;
    static const sc_lv<60> ap_ST_fsm_pp3_stage0;
    static const sc_lv<60> ap_ST_fsm_state63;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_31;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<33> ap_const_lv33_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<55> ap_const_lv55_0;
    static const sc_lv<9> ap_const_lv9_2;
    static const sc_lv<9> ap_const_lv9_3;
    static const sc_lv<9> ap_const_lv9_4;
    static const sc_lv<9> ap_const_lv9_5;
    static const sc_lv<9> ap_const_lv9_6;
    static const sc_lv<9> ap_const_lv9_7;
    static const sc_lv<63> ap_const_lv63_1;
    static const sc_lv<33> ap_const_lv33_1;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_32;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_address0();
    void thread_acc_address1();
    void thread_acc_ce0();
    void thread_acc_ce1();
    void thread_acc_d1();
    void thread_acc_we1();
    void thread_ap_CS_fsm_pp0_stage0();
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
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state63();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
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
    void thread_ap_block_state50_pp0_stage0_iter0();
    void thread_ap_block_state51_pp0_stage0_iter1();
    void thread_ap_block_state58_pp2_stage0_iter0();
    void thread_ap_block_state59_pp2_stage0_iter1();
    void thread_ap_block_state6();
    void thread_ap_block_state61_pp3_stage0_iter0();
    void thread_ap_block_state62_pp3_stage0_iter1();
    void thread_ap_block_state7();
    void thread_ap_block_state8();
    void thread_ap_condition_460();
    void thread_ap_condition_pp0_exit_iter0_state50();
    void thread_ap_condition_pp2_exit_iter0_state58();
    void thread_ap_condition_pp3_exit_iter0_state61();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_phi_mux_outpix_phi_fu_700_p4();
    void thread_ap_ready();
    void thread_bound6_fu_908_p0();
    void thread_bound6_fu_908_p1();
    void thread_bound6_fu_908_p10();
    void thread_bound6_fu_908_p2();
    void thread_bound7_fu_917_p0();
    void thread_bound7_fu_917_p00();
    void thread_bound7_fu_917_p1();
    void thread_bound7_fu_917_p2();
    void thread_buf_address0();
    void thread_buf_address1();
    void thread_buf_ce0();
    void thread_buf_ce1();
    void thread_buf_d1();
    void thread_buf_we1();
    void thread_cast9_fu_900_p1();
    void thread_ch_5_fu_1028_p2();
    void thread_ch_6_fu_1014_p2();
    void thread_ch_mid2_fu_994_p3();
    void thread_exitcond1_fu_931_p2();
    void thread_exitcond5_fu_1090_p2();
    void thread_exitcond6_fu_988_p2();
    void thread_exitcond_flatten5_fu_942_p2();
    void thread_exitcond_flatten6_fu_1073_p2();
    void thread_exitcond_flatten8_fu_953_p2();
    void thread_exitcond_flatten_fu_977_p2();
    void thread_exitcond_fu_964_p2();
    void thread_i_fu_936_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_indvar_flatten_next5_fu_947_p2();
    void thread_indvar_flatten_next6_fu_1078_p2();
    void thread_indvar_flatten_next7_fu_958_p2();
    void thread_indvar_flatten_next_fu_982_p2();
    void thread_internal_ap_ready();
    void thread_j_3_fu_744_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_outch_3_fu_1144_p2();
    void thread_outch_mid2_fu_1096_p3();
    void thread_outpix_3_fu_1084_p2();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_100_cast_fu_1056_p1();
    void thread_tmp_12_fu_874_p4();
    void thread_tmp_32_fu_738_p2();
    void thread_tmp_33_fu_763_p2();
    void thread_tmp_36_fu_1116_p1();
    void thread_tmp_38_mid2_v_fu_1104_p3();
    void thread_tmp_39_fu_1002_p1();
    void thread_tmp_40_fu_1007_p2();
    void thread_tmp_42_fu_1022_p2();
    void thread_tmp_43_fu_1034_p1();
    void thread_tmp_44_fu_1061_p2();
    void thread_tmp_71_fu_1112_p1();
    void thread_tmp_72_fu_1121_p1();
    void thread_tmp_73_fu_750_p3();
    void thread_tmp_74_fu_758_p1();
    void thread_tmp_75_fu_768_p2();
    void thread_tmp_76_fu_773_p3();
    void thread_tmp_77_fu_782_p2();
    void thread_tmp_78_fu_787_p3();
    void thread_tmp_79_fu_796_p2();
    void thread_tmp_80_fu_801_p3();
    void thread_tmp_81_fu_810_p2();
    void thread_tmp_82_fu_815_p3();
    void thread_tmp_83_fu_824_p2();
    void thread_tmp_84_fu_829_p3();
    void thread_tmp_85_fu_838_p2();
    void thread_tmp_86_fu_843_p3();
    void thread_tmp_87_fu_852_p2();
    void thread_tmp_88_fu_857_p3();
    void thread_tmp_89_fu_884_p3();
    void thread_tmp_90_fu_892_p3();
    void thread_tmp_91_fu_1133_p2();
    void thread_tmp_92_fu_1019_p1();
    void thread_tmp_93_fu_1039_p3();
    void thread_tmp_94_fu_1051_p2();
    void thread_tmp_95_cast_fu_1125_p3();
    void thread_tmp_96_cast_fu_1139_p1();
    void thread_tmp_99_cast_fu_1047_p1();
    void thread_tmp_V_2_fu_1160_p1();
    void thread_tmp_V_s_fu_1150_p4();
    void thread_tmp_s_fu_718_p2();
    void thread_xp_3_fu_1068_p2();
    void thread_xp_mid2_fu_969_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
