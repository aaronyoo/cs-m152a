/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002788352446_3598138731_init();
    work_m_00000000003369043363_2964965119_init();
    work_m_00000000003404796685_1744781317_init();
    work_m_00000000004007207300_3505648443_init();
    work_m_00000000003413564477_2908904151_init();
    work_m_00000000004003373847_2088907945_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004003373847_2088907945");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
