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
static const char *ng0 = "C:/Users/Raim/Documents/Laboratorio/RaceGear/rom_Bars.v";
static const char *ng1 = "lineas.mif";
static int ng2[] = {0, 0};
static int ng3[] = {16383, 0};



static void Always_8_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 1784);
    *((int *)t2) = 1;
    t3 = (t0 + 1472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 920);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 600U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 3, t6, t10, t13, 2, 1, t15, 14, 2);
    t14 = (t0 + 828);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 3);
    goto LAB2;

}

static void Initial_11_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(11, ng0);

LAB2:    xsi_set_current_line(12, ng0);
    t1 = (t0 + 920);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    xsi_vlogfile_readmemh(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
}


extern void work_m_00000000002516236979_3796565913_init()
{
	static char *pe[] = {(void *)Always_8_0,(void *)Initial_11_1};
	xsi_register_didat("work_m_00000000002516236979_3796565913", "isim/testbench_isim_beh.exe.sim/work/m_00000000002516236979_3796565913.didat");
	xsi_register_executes(pe);
}
