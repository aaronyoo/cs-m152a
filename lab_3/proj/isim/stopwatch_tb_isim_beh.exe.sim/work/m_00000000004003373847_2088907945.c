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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "";
static const char *ng1 = "segment = %b";
static const char *ng2 = "C:/Users/152/Desktop/cs-m152a/lab_3/stopwatch-tb.v";
static const char *ng3 = "Running...";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};

void Monitor_39_1(char *);
void Monitor_39_1(char *);


static void Monitor_39_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng1, 2, t0, (char)118, t4, 8);

LAB1:    return;
}

static void Initial_24_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng2);

LAB4:    xsi_set_current_line(25, ng2);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(26, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng2);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng2);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng2);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(35, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(36, ng2);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(38, ng2);

LAB8:    xsi_set_current_line(38, ng2);
    t3 = (t0 + 2976);
    xsi_process_wait(t3, 1000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(38, ng2);
    t4 = (t0 + 1608);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t8) == 0)
        goto LAB10;

LAB12:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;

LAB13:    t15 = (t5 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t5) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB15;

LAB14:    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t5, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB15:    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t5) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB14;

LAB16:    xsi_set_current_line(39, ng2);
    Monitor_39_1(t0);
    goto LAB1;

}

void Monitor_39_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3224);
    t2 = (t0 + 3736);
    xsi_vlogfile_monitor((void *)Monitor_39_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000004003373847_2088907945_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Monitor_39_1};
	xsi_register_didat("work_m_00000000004003373847_2088907945", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_00000000004003373847_2088907945.didat");
	xsi_register_executes(pe);
}
