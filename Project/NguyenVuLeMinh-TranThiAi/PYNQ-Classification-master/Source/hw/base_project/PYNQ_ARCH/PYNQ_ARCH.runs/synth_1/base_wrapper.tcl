# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
create_project -in_memory -part xc7z020clg400-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/PYNQ_ARCH/PYNQ_ARCH.cache/wt [current_project]
set_property parent.project_path D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/PYNQ_ARCH/PYNQ_ARCH.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_FIFO XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part digilentinc.com:arty-z7-20:part0:1.0 [current_project]
set_property ip_repo_paths d:/08_Verilog/pro/PYNQ-Classification-master/hw [current_project]
update_ip_catalog
set_property ip_output_repo d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/PYNQ_ARCH/PYNQ_ARCH.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/base_wrapper.v
add_files D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/base.bd
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_0_0/base_axi_dma_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_0_0/base_axi_dma_0_0.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_0_0/base_axi_dma_0_0_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_1_0/base_axi_dma_1_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_1_0/base_axi_dma_1_0.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axi_dma_1_0/base_axi_dma_1_0_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_axis_switch_0_0/base_axis_switch_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_ps7_0/base_ps7_0.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_rst_ps7_100M_0/base_rst_ps7_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_rst_ps7_100M_0/base_rst_ps7_100M_0.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_rst_ps7_100M_0/base_rst_ps7_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_simple_sum_0_0/constraints/simple_sum_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_stream_mult_0_0/constraints/stream_mult_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_mult_constant_0_0/constraints/mult_constant_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_cifar_10_0_0/constraints/cifar_10_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_xbar_0/base_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_xbar_1/base_xbar_1_ooc.xdc]
set_property used_in_synthesis false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_0/base_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_0/base_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_0/base_auto_us_0_ooc.xdc]
set_property used_in_synthesis false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_1/base_auto_us_1_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_1/base_auto_us_1_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_1/base_auto_us_1_ooc.xdc]
set_property used_in_synthesis false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_2/base_auto_us_2_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_2/base_auto_us_2_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_2/base_auto_us_2_ooc.xdc]
set_property used_in_synthesis false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_3/base_auto_us_3_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_3/base_auto_us_3_clocks.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_us_3/base_auto_us_3_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_pc_0/base_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_auto_pc_1/base_auto_pc_1_ooc.xdc]
set_property used_in_implementation false [get_files -all d:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/ip/base_s00_mmu_0/base_s00_mmu_0_ooc.xdc]
set_property used_in_implementation false [get_files -all D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/base/base_ooc.xdc]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/top.xdc
set_property used_in_implementation false [get_files D:/08_Verilog/pro/PYNQ-Classification-master/hw/base_project/top.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top base_wrapper -part xc7z020clg400-1


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef base_wrapper.dcp
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
