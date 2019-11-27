
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name DDR -dir "C:/Users/152/Desktop/cs-m152a/lab_4/DDR/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/152/Desktop/cs-m152a/lab_4/DDR/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/152/Desktop/cs-m152a/lab_4/DDR} }
set_property target_constrs_file "nexys3.ucf" [current_fileset -constrset]
add_files [list {nexys3.ucf}] -fileset [get_property constrset [current_run]]
link_design
