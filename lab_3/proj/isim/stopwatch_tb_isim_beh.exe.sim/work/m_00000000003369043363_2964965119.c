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
static const char *ng0 = "C:/Users/152/Desktop/cs-m152a/lab_3/clock.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {50000000, 0};
static const char *ng4 = "IDX: %d, OneCLK: %d";
static int ng5[] = {25000000, 0};
static const char *ng6 = "IDX: %d, TwoCLK: %d";
static int ng7[] = {50000, 0};
static int ng8[] = {600000, 0};



static void Initial_11_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(11, ng0);

LAB2:    xsi_set_current_line(12, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_19_1(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(23, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(36, ng0);

LAB14:    xsi_set_current_line(37, ng0);
    t12 = (t0 + 2248);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1768);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng4, 3, t0, (char)119, t15, 32, (char)118, t18, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB18:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB20;

LAB19:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB13;

LAB15:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB19;

LAB21:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t12 = (t0 + 2408);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1608);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t15, 32, (char)118, t18, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t5) == 0)
        goto LAB25;

LAB27:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB28:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB30;

LAB29:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t15 = (t0 + 1608);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB23;

LAB25:    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB30:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB29;

LAB31:    xsi_set_current_line(50, ng0);

LAB34:    xsi_set_current_line(52, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t5) == 0)
        goto LAB35;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB38:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB40;

LAB39:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB33;

LAB35:    *((unsigned int *)t13) = 1;
    goto LAB38;

LAB40:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB39;

LAB41:    xsi_set_current_line(57, ng0);

LAB44:    xsi_set_current_line(59, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t5) == 0)
        goto LAB45;

LAB47:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB48:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB50;

LAB49:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB43;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB50:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB49;

}


extern void work_m_00000000003369043363_2964965119_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_19_1};
	xsi_register_didat("work_m_00000000003369043363_2964965119", "isim/stopwatch_tb_isim_beh.exe.sim/work/m_00000000003369043363_2964965119.didat");
	xsi_register_executes(pe);
}
