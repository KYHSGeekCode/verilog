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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/csehome/gunhee2001/Final/SignExtend.v";



static void Cont_26_0(char *t0)
{
    char t3[8];
    char t5[8];
    char t15[8];
    char t25[8];
    char t35[8];
    char t45[8];
    char t55[8];
    char t65[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 1);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 1);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 1);
    t39 = (t38 & 1);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t33) = t42;
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 1);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 1);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 1);
    t59 = (t58 & 1);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 1);
    t62 = (t61 & 1);
    *((unsigned int *)t53) = t62;
    t63 = (t0 + 1048U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t63 = (t65 + 4);
    t66 = (t64 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 1);
    t69 = (t68 & 1);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 1);
    t72 = (t71 & 1);
    *((unsigned int *)t63) = t72;
    t73 = (t0 + 1048U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t75 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t75) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 1);
    t82 = (t81 & 1);
    *((unsigned int *)t73) = t82;
    xsi_vlogtype_concat(t3, 8, 8, 8U, t75, 1, t65, 1, t55, 1, t45, 1, t35, 1, t25, 1, t15, 1, t5, 1);
    t83 = (t0 + 2760);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 255U;
    t89 = t88;
    t90 = (t3 + 4);
    t91 = *((unsigned int *)t3);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 7);
    t96 = (t0 + 2680);
    *((int *)t96) = 1;

LAB1:    return;
}


extern void work_m_07269251488585143051_0967961054_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_07269251488585143051_0967961054", "isim/Main_isim_beh.exe.sim/work/m_07269251488585143051_0967961054.didat");
	xsi_register_executes(pe);
}
