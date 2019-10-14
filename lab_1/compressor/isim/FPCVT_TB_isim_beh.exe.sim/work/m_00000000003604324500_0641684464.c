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
static const char *ng0 = "C:/Users/152/Desktop/cs-m152a/lab_1/compressor/M1.v";
static unsigned int ng1[] = {2048U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4095U, 0U};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t46[8];
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
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1640);
    *((int *)t2) = 1;
    t3 = (t0 + 1472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(48, ng0);

LAB20:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 12);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);

LAB8:    xsi_set_current_line(34, ng0);
    t20 = (t0 + 600U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB12;

LAB9:    if (t34 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;

LAB12:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t22, 0, 8);
    t2 = (t22 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB19;

LAB18:    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 4095U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 4095U);
    t14 = ((char*)((ng2)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 12, t6, 12, t14, 12);
    t20 = (t0 + 828);
    xsi_vlogvar_assign_value(t20, t46, 0, 0, 12);

LAB15:    goto LAB7;

LAB11:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t44 = ((char*)((ng2)));
    t45 = (t0 + 920);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    goto LAB15;

LAB19:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t19 | t25);
    goto LAB18;

}


extern void work_m_00000000003604324500_0641684464_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003604324500_0641684464", "isim/FPCVT_TB_isim_beh.exe.sim/work/m_00000000003604324500_0641684464.didat");
	xsi_register_executes(pe);
}
