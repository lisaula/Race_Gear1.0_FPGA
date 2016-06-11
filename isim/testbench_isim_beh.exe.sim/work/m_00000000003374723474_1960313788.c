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
static const char *ng0 = "C:/Users/Raim/Documents/Laboratorio/RaceGear/VGA_LOGIC.v";
static int ng1[] = {799, 0};
static int ng2[] = {0, 0};
static int ng3[] = {524, 0};
static int ng4[] = {1, 0};
static int ng5[] = {490, 0};
static int ng6[] = {492, 0};
static int ng7[] = {656, 0};
static int ng8[] = {752, 0};
static int ng9[] = {640, 0};
static int ng10[] = {480, 0};
static unsigned int ng11[] = {0U, 0U};



static void Cont_17_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3052);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 2992);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_18_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 3000);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_19_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t35[8];
    char t39[8];
    char t42[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);

LAB23:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 10, t5, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 10);

LAB12:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB25;

LAB24:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB27;

LAB26:    *((unsigned int *)t8) = 1;

LAB27:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t10) != 0)
        goto LAB31;

LAB32:    t24 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t24);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB33;

LAB34:    memcpy(t42, t32, 8);

LAB35:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(36, ng0);

LAB52:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB54;

LAB53:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB56;

LAB55:    *((unsigned int *)t8) = 1;

LAB56:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t10) != 0)
        goto LAB60;

LAB61:    t24 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t24);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB62;

LAB63:    memcpy(t42, t32, 8);

LAB64:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(42, ng0);

LAB81:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB79:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB83;

LAB82:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB84;

LAB85:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t10) != 0)
        goto LAB89;

LAB90:    t24 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t24);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB91;

LAB92:    memcpy(t42, t32, 8);

LAB93:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(50, ng0);

LAB110:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB108:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB112;

LAB111:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB112;

LAB115:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB113;

LAB114:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t10) != 0)
        goto LAB118;

LAB119:    t24 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t24);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB120;

LAB121:    memcpy(t42, t32, 8);

LAB122:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB135;

LAB136:
LAB137:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);

LAB13:    xsi_set_current_line(23, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1564);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 10);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(27, ng0);

LAB22:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 10, t5, 32);
    t6 = (t0 + 1656);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 10);

LAB20:    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(25, ng0);

LAB21:    xsi_set_current_line(26, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 1656);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 10);
    goto LAB20;

LAB25:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB31:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB33:    t30 = (t0 + 1656);
    t31 = (t30 + 36U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB37;

LAB36:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB38;

LAB39:    memset(t39, 0, 8);
    t40 = (t35 + 4);
    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t21 = *((unsigned int *)t35);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t40) != 0)
        goto LAB43;

LAB44:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t39);
    t28 = (t26 & t27);
    *((unsigned int *)t42) = t28;
    t43 = (t32 + 4);
    t44 = (t39 + 4);
    t45 = (t42 + 4);
    t29 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t44);
    t47 = (t29 | t46);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t35) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t39) = 1;
    goto LAB44;

LAB43:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB44;

LAB45:    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t42) = (t50 | t51);
    t52 = (t32 + 4);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    t69 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t69 & t65);
    goto LAB47;

LAB48:    xsi_set_current_line(34, ng0);

LAB51:    xsi_set_current_line(35, ng0);
    t76 = ((char*)((ng2)));
    t77 = (t0 + 1472);
    xsi_vlogvar_assign_value(t77, t76, 0, 0, 1);
    goto LAB50;

LAB54:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB56;

LAB58:    *((unsigned int *)t32) = 1;
    goto LAB61;

LAB60:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB61;

LAB62:    t30 = (t0 + 1564);
    t31 = (t30 + 36U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng8)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB66;

LAB65:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB67;

LAB68:    memset(t39, 0, 8);
    t40 = (t35 + 4);
    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t21 = *((unsigned int *)t35);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t40) != 0)
        goto LAB72;

LAB73:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t39);
    t28 = (t26 & t27);
    *((unsigned int *)t42) = t28;
    t43 = (t32 + 4);
    t44 = (t39 + 4);
    t45 = (t42 + 4);
    t29 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t44);
    t47 = (t29 | t46);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB64;

LAB66:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t35) = 1;
    goto LAB68;

LAB70:    *((unsigned int *)t39) = 1;
    goto LAB73;

LAB72:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB73;

LAB74:    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t42) = (t50 | t51);
    t52 = (t32 + 4);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    t69 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t69 & t65);
    goto LAB76;

LAB77:    xsi_set_current_line(40, ng0);

LAB80:    xsi_set_current_line(41, ng0);
    t76 = ((char*)((ng2)));
    t77 = (t0 + 1380);
    xsi_vlogvar_assign_value(t77, t76, 0, 0, 1);
    goto LAB79;

LAB83:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB85;

LAB84:    *((unsigned int *)t8) = 1;
    goto LAB85;

LAB87:    *((unsigned int *)t32) = 1;
    goto LAB90;

LAB89:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB90;

LAB91:    t30 = (t0 + 1656);
    t31 = (t30 + 36U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng10)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB95;

LAB94:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB96;

LAB97:    memset(t39, 0, 8);
    t40 = (t35 + 4);
    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t21 = *((unsigned int *)t35);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t40) != 0)
        goto LAB101;

LAB102:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t39);
    t28 = (t26 & t27);
    *((unsigned int *)t42) = t28;
    t43 = (t32 + 4);
    t44 = (t39 + 4);
    t45 = (t42 + 4);
    t29 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t44);
    t47 = (t29 | t46);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB93;

LAB95:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB97;

LAB96:    *((unsigned int *)t35) = 1;
    goto LAB97;

LAB99:    *((unsigned int *)t39) = 1;
    goto LAB102;

LAB101:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB102;

LAB103:    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t42) = (t50 | t51);
    t52 = (t32 + 4);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    t69 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t69 & t65);
    goto LAB105;

LAB106:    xsi_set_current_line(46, ng0);

LAB109:    xsi_set_current_line(47, ng0);
    t76 = (t0 + 1748);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    t80 = (t79 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t78);
    t83 = (t82 >> 0);
    t84 = (t83 & 1);
    *((unsigned int *)t79) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 0);
    t87 = (t86 & 1);
    *((unsigned int *)t80) = t87;
    t88 = (t0 + 1104);
    xsi_vlogvar_assign_value(t88, t79, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    goto LAB108;

LAB112:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB114;

LAB113:    *((unsigned int *)t8) = 1;
    goto LAB114;

LAB116:    *((unsigned int *)t32) = 1;
    goto LAB119;

LAB118:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB119;

LAB120:    t30 = (t0 + 1656);
    t31 = (t30 + 36U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng10)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB124;

LAB123:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB124;

LAB127:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB125;

LAB126:    memset(t39, 0, 8);
    t40 = (t35 + 4);
    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t21 = *((unsigned int *)t35);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t40) != 0)
        goto LAB130;

LAB131:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t39);
    t28 = (t26 & t27);
    *((unsigned int *)t42) = t28;
    t43 = (t32 + 4);
    t44 = (t39 + 4);
    t45 = (t42 + 4);
    t29 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t44);
    t47 = (t29 | t46);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB122;

LAB124:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB126;

LAB125:    *((unsigned int *)t35) = 1;
    goto LAB126;

LAB128:    *((unsigned int *)t39) = 1;
    goto LAB131;

LAB130:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB131;

LAB132:    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t42) = (t50 | t51);
    t52 = (t32 + 4);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    t69 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t69 & t65);
    goto LAB134;

LAB135:    xsi_set_current_line(56, ng0);

LAB138:    xsi_set_current_line(77, ng0);
    t76 = (t0 + 692U);
    t77 = *((char **)t76);
    t76 = (t0 + 1748);
    xsi_vlogvar_assign_value(t76, t77, 0, 0, 3);
    goto LAB137;

}

static void Initial_81_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(82, ng0);

LAB2:    xsi_set_current_line(83, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(84, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(85, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB1:    return;
}


extern void work_m_00000000003374723474_1960313788_init()
{
	static char *pe[] = {(void *)Cont_17_0,(void *)Cont_18_1,(void *)Always_19_2,(void *)Initial_81_3};
	xsi_register_didat("work_m_00000000003374723474_1960313788", "isim/testbench_isim_beh.exe.sim/work/m_00000000003374723474_1960313788.didat");
	xsi_register_executes(pe);
}
