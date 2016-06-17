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
static const char *ng0 = "C:/Users/Raim/Documents/Laboratorio/RaceGear/Enemy.v";
static int ng1[] = {601, 0};
static int ng2[] = {1, 0};
static int ng3[] = {600, 0};
static int ng4[] = {0, 0};
static int ng5[] = {620, 0};
static int ng6[] = {480, 0};
static int ng7[] = {640, 0};
static int ng8[] = {121, 0};
static int ng9[] = {80, 0};
static int ng10[] = {2, 0};



static void Cont_16_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t16 = (t0 + 3176);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_23_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t25[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3184);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t5 = (t0 + 1336U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);

LAB13:    xsi_set_current_line(27, ng0);
    t19 = (t0 + 1060U);
    t20 = *((char **)t19);
    t19 = (t0 + 1932);
    t21 = (t19 + 36U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t20, 10, t22, 10);
    t24 = ((char*)((ng1)));
    memset(t25, 0, 8);
    t26 = (t23 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB15;

LAB14:    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t23) < *((unsigned int *)t24))
        goto LAB16;

LAB17:    t29 = (t25 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(32, ng0);

LAB23:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1748);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 10);

LAB21:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(43, ng0);

LAB36:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);

LAB26:    goto LAB12;

LAB15:    t28 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t25) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(28, ng0);

LAB22:    xsi_set_current_line(29, ng0);
    t35 = (t0 + 1060U);
    t36 = *((char **)t35);
    t35 = (t0 + 1932);
    t37 = (t35 + 36U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 10, t36, 10, t38, 10);
    t40 = (t0 + 1748);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 10);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 10);
    goto LAB21;

LAB24:    xsi_set_current_line(36, ng0);

LAB27:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1748);
    t6 = (t5 + 36U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t19 = (t12 + 4);
    t20 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = *((unsigned int *)t13);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t19);
    t18 = *((unsigned int *)t20);
    t30 = (t17 ^ t18);
    t31 = (t16 | t30);
    t32 = *((unsigned int *)t19);
    t33 = *((unsigned int *)t20);
    t34 = (t32 | t33);
    t41 = (~(t34));
    t42 = (t31 & t41);
    if (t42 != 0)
        goto LAB31;

LAB28:    if (t34 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t4) = 1;

LAB31:    t22 = (t4 + 4);
    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t45 = *((unsigned int *)t4);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB26;

LAB30:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(38, ng0);

LAB35:    xsi_set_current_line(39, ng0);
    t24 = ((char*)((ng4)));
    t26 = (t0 + 1748);
    xsi_vlogvar_assign_value(t26, t24, 0, 0, 10);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    goto LAB34;

LAB37:    xsi_set_current_line(48, ng0);

LAB40:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 1932);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 10);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    goto LAB39;

}

static void Always_55_2(char *t0)
{
    char t6[8];
    char t18[8];
    char t32[8];
    char t36[8];
    char t53[8];
    char t54[8];
    char t58[8];
    char t66[8];
    char t107[8];
    char t110[8];
    char t125[8];
    char t126[8];
    char t130[8];
    char t138[8];
    char t180[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t127;
    char *t128;
    char *t129;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t181;

LAB0:    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3192);
    *((int *)t2) = 1;
    t3 = (t0 + 2864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(58, ng0);

LAB14:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 1152U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB16;

LAB15:    t20 = (t16 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t17) < *((unsigned int *)t16))
        goto LAB17;

LAB18:    t22 = (t18 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t18);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB13;

LAB16:    t21 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(60, ng0);

LAB23:    xsi_set_current_line(61, ng0);
    t28 = (t0 + 1244U);
    t29 = *((char **)t28);
    t28 = (t0 + 1748);
    t30 = (t28 + 36U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t29 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB24:    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t29) < *((unsigned int *)t31))
        goto LAB27;

LAB26:    *((unsigned int *)t32) = 1;

LAB27:    memset(t36, 0, 8);
    t37 = (t32 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t37) != 0)
        goto LAB31;

LAB32:    t44 = (t36 + 4);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t44);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB33;

LAB34:    memcpy(t66, t36, 8);

LAB35:    t98 = (t66 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t66);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(71, ng0);

LAB86:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);

LAB50:    goto LAB22;

LAB25:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB31:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB32;

LAB33:    t48 = (t0 + 1244U);
    t49 = *((char **)t48);
    t48 = (t0 + 1748);
    t50 = (t48 + 36U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng8)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 10, t52, 32);
    memset(t54, 0, 8);
    t55 = (t49 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB37;

LAB36:    t56 = (t53 + 4);
    if (*((unsigned int *)t56) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t49) < *((unsigned int *)t53))
        goto LAB38;

LAB39:    memset(t58, 0, 8);
    t59 = (t54 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t54);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t59) != 0)
        goto LAB43;

LAB44:    t67 = *((unsigned int *)t36);
    t68 = *((unsigned int *)t58);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t70 = (t36 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t57 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t54) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t58) = 1;
    goto LAB44;

LAB43:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB44;

LAB45:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t36 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t36);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t58);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t94 & t92);
    t95 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t95 & t93);
    t96 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t96 & t92);
    t97 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t97 & t93);
    goto LAB47;

LAB48:    xsi_set_current_line(62, ng0);

LAB51:    xsi_set_current_line(63, ng0);
    t104 = (t0 + 1152U);
    t105 = *((char **)t104);
    t104 = (t0 + 1428U);
    t106 = *((char **)t104);
    memset(t107, 0, 8);
    t104 = (t105 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB53;

LAB52:    t108 = (t106 + 4);
    if (*((unsigned int *)t108) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t105) < *((unsigned int *)t106))
        goto LAB55;

LAB54:    *((unsigned int *)t107) = 1;

LAB55:    memset(t110, 0, 8);
    t111 = (t107 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t111) != 0)
        goto LAB59;

LAB60:    t118 = (t110 + 4);
    t119 = *((unsigned int *)t110);
    t120 = *((unsigned int *)t118);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB61;

LAB62:    memcpy(t138, t110, 8);

LAB63:    t170 = (t138 + 4);
    t171 = *((unsigned int *)t170);
    t172 = (~(t171));
    t173 = *((unsigned int *)t138);
    t174 = (t173 & t172);
    t175 = (t174 != 0);
    if (t175 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB50;

LAB53:    t109 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t110) = 1;
    goto LAB60;

LAB59:    t117 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB60;

LAB61:    t122 = (t0 + 1152U);
    t123 = *((char **)t122);
    t122 = (t0 + 1428U);
    t124 = *((char **)t122);
    t122 = ((char*)((ng9)));
    memset(t125, 0, 8);
    xsi_vlog_unsigned_add(t125, 32, t124, 10, t122, 32);
    memset(t126, 0, 8);
    t127 = (t123 + 4);
    if (*((unsigned int *)t127) != 0)
        goto LAB65;

LAB64:    t128 = (t125 + 4);
    if (*((unsigned int *)t128) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t123) < *((unsigned int *)t125))
        goto LAB66;

LAB67:    memset(t130, 0, 8);
    t131 = (t126 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t126);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t131) != 0)
        goto LAB71;

LAB72:    t139 = *((unsigned int *)t110);
    t140 = *((unsigned int *)t130);
    t141 = (t139 & t140);
    *((unsigned int *)t138) = t141;
    t142 = (t110 + 4);
    t143 = (t130 + 4);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t142);
    t146 = *((unsigned int *)t143);
    t147 = (t145 | t146);
    *((unsigned int *)t144) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB63;

LAB65:    t129 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t126) = 1;
    goto LAB67;

LAB69:    *((unsigned int *)t130) = 1;
    goto LAB72;

LAB71:    t137 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB72;

LAB73:    t150 = *((unsigned int *)t138);
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t138) = (t150 | t151);
    t152 = (t110 + 4);
    t153 = (t130 + 4);
    t154 = *((unsigned int *)t110);
    t155 = (~(t154));
    t156 = *((unsigned int *)t152);
    t157 = (~(t156));
    t158 = *((unsigned int *)t130);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (~(t160));
    t162 = (t155 & t157);
    t163 = (t159 & t161);
    t164 = (~(t162));
    t165 = (~(t163));
    t166 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t166 & t164);
    t167 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t167 & t165);
    t168 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t168 & t164);
    t169 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t169 & t165);
    goto LAB75;

LAB76:    xsi_set_current_line(64, ng0);

LAB79:    xsi_set_current_line(65, ng0);
    t176 = (t0 + 2024);
    t177 = (t176 + 36U);
    t178 = *((char **)t177);
    t179 = ((char*)((ng2)));
    memset(t180, 0, 8);
    xsi_vlog_unsigned_add(t180, 32, t178, 14, t179, 32);
    t181 = (t0 + 2024);
    xsi_vlogvar_assign_value(t181, t180, 0, 0, 14);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    t23 = (t15 & 1);
    *((unsigned int *)t2) = t23;
    t5 = (t0 + 1840);
    t7 = (t0 + 1840);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t10, 32, 1);
    t16 = (t18 + 4);
    t24 = *((unsigned int *)t16);
    t90 = (!(t24));
    if (t90 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 1);
    t23 = (t15 & 1);
    *((unsigned int *)t2) = t23;
    t5 = (t0 + 1840);
    t7 = (t0 + 1840);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t10, 32, 1);
    t16 = (t18 + 4);
    t24 = *((unsigned int *)t16);
    t90 = (!(t24));
    if (t90 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 2);
    t23 = (t15 & 1);
    *((unsigned int *)t2) = t23;
    t5 = (t0 + 1840);
    t7 = (t0 + 1840);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t18, t9, 2, t10, 32, 1);
    t16 = (t18 + 4);
    t24 = *((unsigned int *)t16);
    t90 = (!(t24));
    if (t90 == 1)
        goto LAB84;

LAB85:    goto LAB78;

LAB80:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t18), 1);
    goto LAB81;

LAB82:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t18), 1);
    goto LAB83;

LAB84:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t18), 1);
    goto LAB85;

}

static void Initial_77_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(78, ng0);

LAB2:    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);

LAB1:    return;
}


extern void work_m_00000000000966974070_0882642368_init()
{
	static char *pe[] = {(void *)Cont_16_0,(void *)Always_23_1,(void *)Always_55_2,(void *)Initial_77_3};
	xsi_register_didat("work_m_00000000000966974070_0882642368", "isim/testbench_isim_beh.exe.sim/work/m_00000000000966974070_0882642368.didat");
	xsi_register_executes(pe);
}
