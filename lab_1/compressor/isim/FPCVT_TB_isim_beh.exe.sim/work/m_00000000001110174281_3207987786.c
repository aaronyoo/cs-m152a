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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Desktop/cs-m152a/lab_1/compressor/M2.v";
static int ng1[] = {0, 0};
static int ng2[] = {12, 0};
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {0U, 0U};



static void Always_39_0(char *t0)
{
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2100);
    *((int *)t2) = 1;
    t3 = (t0 + 1932);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t2, 32, t5, 5);
    t7 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t6, 32, t7, 32);
    t13 = (t0 + 1196);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB13:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB16:    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB20:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t22 = (t11 ^ t12);
    t23 = (t10 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t31 = (~(t26));
    t32 = (t23 & t31);
    if (t32 != 0)
        goto LAB24;

LAB21:    if (t26 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t16 = (t6 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t22 = (t11 ^ t12);
    t23 = (t10 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t31 = (~(t26));
    t32 = (t23 & t31);
    if (t32 != 0)
        goto LAB32;

LAB29:    if (t26 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;

LAB32:    t16 = (t6 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(60, ng0);

LAB37:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 12, t3, 12, t5, 5);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 12);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t13 = (t0 + 920);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t13 = (t0 + 1012);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    t13 = (t0 + 576U);
    t16 = (t13 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1380);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(41, ng0);
    t27 = (t0 + 1380);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t30 = (t0 + 1104);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 5);
    goto LAB12;

LAB14:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(46, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 1196);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t17, 32, t20, 5);
    t21 = (t0 + 828);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 3);
    goto LAB20;

LAB23:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(50, ng0);

LAB28:    xsi_set_current_line(51, ng0);
    t17 = ((char*)((ng5)));
    t18 = (t0 + 828);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB27;

LAB31:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(54, ng0);

LAB36:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 600U);
    t18 = *((char **)t17);
    t17 = (t0 + 1288);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 12);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t13 = (t0 + 920);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

}


extern void work_m_00000000001110174281_3207987786_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000001110174281_3207987786", "isim/FPCVT_TB_isim_beh.exe.sim/work/m_00000000001110174281_3207987786.didat");
	xsi_register_executes(pe);
}
