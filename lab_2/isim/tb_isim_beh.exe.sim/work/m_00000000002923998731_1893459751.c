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
static const char *ng0 = "C:/Users/152/Desktop/cs-m152a/lab_2_test/src/rtl/seq_alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_30_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3404U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3744);
    *((int *)t2) = 1;
    t3 = (t0 + 3432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 2788);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1916U);
    t9 = *((char **)t8);
    t8 = (t0 + 1640U);
    t10 = *((char **)t8);
    xsi_vlogtype_concat(t7, 20, 20, 2U, t10, 16, t9, 4);
    t8 = (t0 + 2788);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB14;

LAB8:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2284U);
    t4 = *((char **)t3);
    t3 = (t0 + 2788);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB14;

LAB10:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 2468U);
    t4 = *((char **)t3);
    t3 = (t0 + 2788);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB14;

}

static void Always_38_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    t7 = (t0 + 2880);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2376U);
    t4 = *((char **)t3);
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2560U);
    t4 = *((char **)t3);
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB14;

}


extern void work_m_00000000002923998731_1893459751_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000002923998731_1893459751", "isim/tb_isim_beh.exe.sim/work/m_00000000002923998731_1893459751.didat");
	xsi_register_executes(pe);
}
