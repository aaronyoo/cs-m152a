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
static const char *ng0 = "C:/Users/152/Desktop/cs-m152a/lab_2/src/tb/tb.v";
static const char *ng1 = "%d ... Running instruction %08b";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {4, 0};
static int ng9[] = {2, 0};
static int ng10[] = {3, 0};
static const char *ng11 = "%d ... instruction %08b executed";
static const char *ng12 = "%d ... led output changed to %08b";



static int sp_tskRunInst(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 484);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    *((int *)t5) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = (t1 + 2844);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t1 + 484);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t10, (char)118, t5, 32, (char)118, t9, 8);
    xsi_set_current_line(82, ng0);
    t4 = (t1 + 2844);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t8 = (t1 + 2292);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1500000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(83, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 2476);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 3000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(84, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 2476);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static int sp_tskRunPUSH(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 740);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t7 = (t1 + 3028);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t19 = (t1 + 2936);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t30 = ((char*)((ng4)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t30, 2, t18, 2, t6, 4);
    t31 = (t1 + 3120);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 3120);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t2 + 32U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 32U);
    t21 = *((char **)t20);
    t22 = (t1 + 484);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t30 = (t1 + 2844);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 8);

LAB8:    t31 = (t2 + 36U);
    t32 = *((char **)t31);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t34 + 148U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t39 == -1)
        goto LAB9;

LAB10:    if (t39 != 0)
        goto LAB11;

LAB6:    t32 = (t1 + 484);
    xsi_vlog_subprogram_popinvocation(t32);

LAB7:    t40 = (t2 + 36U);
    t41 = *((char **)t40);
    t40 = (t1 + 484);
    t42 = (t2 + 32U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t40, t41, t1, t43, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t31 = (t2 + 28U);
    *((char **)t31) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunSEND(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 996);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t6 = ((char*)((ng4)));
    t8 = (t1 + 3212);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 3U);
    t19 = ((char*)((ng5)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t19, 2, t7, 2, t6, 4);
    t20 = (t1 + 3304);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t4 = (t1 + 3304);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB6);
    t19 = (t2 + 32U);
    t20 = *((char **)t19);
    t21 = (t1 + 484);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t1 + 2844);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 8);

LAB8:    t24 = (t2 + 36U);
    t25 = *((char **)t24);
    t26 = (t25 + 44U);
    t27 = *((char **)t26);
    t28 = (t27 + 148U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t1, t25);
    if (t32 == -1)
        goto LAB9;

LAB10:    if (t32 != 0)
        goto LAB11;

LAB6:    t25 = (t1 + 484);
    xsi_vlog_subprogram_popinvocation(t25);

LAB7:    t33 = (t2 + 36U);
    t34 = *((char **)t33);
    t33 = (t1 + 484);
    t35 = (t2 + 32U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t33, t34, t1, t36, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t24 = (t2 + 28U);
    *((char **)t24) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunADD(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1252);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t7 = (t1 + 3580);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 3488);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 3396);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng6)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 3672);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t4 = (t1 + 3672);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t2 + 32U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 32U);
    t21 = *((char **)t20);
    t22 = (t1 + 484);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 2844);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 36U);
    t33 = *((char **)t32);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t42 = (t35 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 484);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 36U);
    t48 = *((char **)t47);
    t47 = (t1 + 484);
    t49 = (t2 + 32U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 28U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunMULT(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1508);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(123, ng0);

LAB5:    xsi_set_current_line(124, ng0);
    t7 = (t1 + 3948);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 3856);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 3764);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng7)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 4040);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t4 = (t1 + 4040);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t2 + 32U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 32U);
    t21 = *((char **)t20);
    t22 = (t1 + 484);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 2844);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 36U);
    t33 = *((char **)t32);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t42 = (t35 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 484);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 36U);
    t48 = *((char **)t47);
    t47 = (t1 + 484);
    t49 = (t2 + 32U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 28U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static void Initial_20_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 4564U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2476);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4464);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4464);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4464);
    t5 = (t0 + 740);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2936);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 3028);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB9:    t9 = (t0 + 4516);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 740);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 4516);
    t19 = *((char **)t18);
    t18 = (t0 + 740);
    t20 = (t0 + 4464);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4464);
    t5 = (t0 + 740);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2936);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 3028);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB15:    t9 = (t0 + 4516);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB17:    if (t17 != 0)
        goto LAB18;

LAB13:    t10 = (t0 + 740);
    xsi_vlog_subprogram_popinvocation(t10);

LAB14:    t18 = (t0 + 4516);
    t19 = *((char **)t18);
    t18 = (t0 + 740);
    t20 = (t0 + 4464);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4464);
    t5 = (t0 + 740);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2936);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 3028);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB21:    t9 = (t0 + 4516);
    t10 = *((char **)t9);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t12 + 148U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB23:    if (t17 != 0)
        goto LAB24;

LAB19:    t10 = (t0 + 740);
    xsi_vlog_subprogram_popinvocation(t10);

LAB20:    t18 = (t0 + 4516);
    t19 = *((char **)t18);
    t18 = (t0 + 740);
    t20 = (t0 + 4464);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4464);
    t6 = (t0 + 1252);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3396);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 3488);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 3580);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB27:    t11 = (t0 + 4516);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB29:    if (t17 != 0)
        goto LAB30;

LAB25:    t12 = (t0 + 1252);
    xsi_vlog_subprogram_popinvocation(t12);

LAB26:    t20 = (t0 + 4516);
    t21 = *((char **)t20);
    t20 = (t0 + 1252);
    t22 = (t0 + 4464);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4464);
    t6 = (t0 + 1252);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3396);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 3488);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 3580);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB33:    t11 = (t0 + 4516);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t12 = (t0 + 1252);
    xsi_vlog_subprogram_popinvocation(t12);

LAB32:    t20 = (t0 + 4516);
    t21 = *((char **)t20);
    t20 = (t0 + 1252);
    t22 = (t0 + 4464);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4464);
    t6 = (t0 + 1252);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3396);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 3488);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 3580);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB39:    t11 = (t0 + 4516);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t12 = (t0 + 1252);
    xsi_vlog_subprogram_popinvocation(t12);

LAB38:    t20 = (t0 + 4516);
    t21 = *((char **)t20);
    t20 = (t0 + 1252);
    t22 = (t0 + 4464);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4464);
    t6 = (t0 + 1252);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3396);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 3488);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 3580);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB45:    t11 = (t0 + 4516);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB47:    if (t17 != 0)
        goto LAB48;

LAB43:    t12 = (t0 + 1252);
    xsi_vlog_subprogram_popinvocation(t12);

LAB44:    t20 = (t0 + 4516);
    t21 = *((char **)t20);
    t20 = (t0 + 1252);
    t22 = (t0 + 4464);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4464);
    t4 = (t0 + 996);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3212);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB51:    t7 = (t0 + 4516);
    t8 = *((char **)t7);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t10 + 148U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB53:    if (t17 != 0)
        goto LAB54;

LAB49:    t8 = (t0 + 996);
    xsi_vlog_subprogram_popinvocation(t8);

LAB50:    t15 = (t0 + 4516);
    t16 = *((char **)t15);
    t15 = (t0 + 996);
    t18 = (t0 + 4464);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4464);
    t4 = (t0 + 996);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3212);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB57:    t7 = (t0 + 4516);
    t8 = *((char **)t7);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t10 + 148U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB59:    if (t17 != 0)
        goto LAB60;

LAB55:    t8 = (t0 + 996);
    xsi_vlog_subprogram_popinvocation(t8);

LAB56:    t15 = (t0 + 4516);
    t16 = *((char **)t15);
    t15 = (t0 + 996);
    t18 = (t0 + 4464);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4464);
    t4 = (t0 + 996);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3212);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB63:    t7 = (t0 + 4516);
    t8 = *((char **)t7);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t10 + 148U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB65:    if (t17 != 0)
        goto LAB66;

LAB61:    t8 = (t0 + 996);
    xsi_vlog_subprogram_popinvocation(t8);

LAB62:    t15 = (t0 + 4516);
    t16 = *((char **)t15);
    t15 = (t0 + 996);
    t18 = (t0 + 4464);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4464);
    t4 = (t0 + 996);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3212);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB69:    t7 = (t0 + 4516);
    t8 = *((char **)t7);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t10 + 148U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB71:    if (t17 != 0)
        goto LAB72;

LAB67:    t8 = (t0 + 996);
    xsi_vlog_subprogram_popinvocation(t8);

LAB68:    t15 = (t0 + 4516);
    t16 = *((char **)t15);
    t15 = (t0 + 996);
    t18 = (t0 + 4464);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4464);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 4564U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t9 = (t0 + 4564U);
    *((char **)t9) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t9 = (t0 + 4564U);
    *((char **)t9) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t11 = (t0 + 4564U);
    *((char **)t11) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t11 = (t0 + 4564U);
    *((char **)t11) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t11 = (t0 + 4564U);
    *((char **)t11) = &&LAB39;
    goto LAB1;

LAB46:;
LAB48:    t11 = (t0 + 4564U);
    *((char **)t11) = &&LAB45;
    goto LAB1;

LAB52:;
LAB54:    t7 = (t0 + 4564U);
    *((char **)t7) = &&LAB51;
    goto LAB1;

LAB58:;
LAB60:    t7 = (t0 + 4564U);
    *((char **)t7) = &&LAB57;
    goto LAB1;

LAB64:;
LAB66:    t7 = (t0 + 4564U);
    *((char **)t7) = &&LAB63;
    goto LAB1;

LAB70:;
LAB72:    t7 = (t0 + 4564U);
    *((char **)t7) = &&LAB69;
    goto LAB1;

LAB73:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4464);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4464);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    xsi_set_current_line(51, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_54_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4708U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2384);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2384);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_129_2(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4852U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 6972);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 36U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(131, ng0);
    *((int *)t14) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t15 = (t14 + 4);
    *((int *)t15) = 0;
    t16 = (t0 + 6992);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t0, (char)118, t14, 32, (char)118, t19, 8);
    goto LAB7;

}

static void Always_133_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5200);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 2064U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t4, 32, (char)118, t7, 8);
    goto LAB2;

}


extern void work_m_00000000002910541050_3671711236_init()
{
	static char *pe[] = {(void *)Initial_20_0,(void *)Always_54_1,(void *)Always_129_2,(void *)Always_133_3};
	static char *se[] = {(void *)sp_tskRunInst,(void *)sp_tskRunPUSH,(void *)sp_tskRunSEND,(void *)sp_tskRunADD,(void *)sp_tskRunMULT};
	xsi_register_didat("work_m_00000000002910541050_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000002910541050_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
