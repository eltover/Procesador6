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
static const char *ng0 = "C:/Users/Usuario/Desktop/Arquitectura/procesador4/Procesador271016/seu_32.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1758567153_1644550089_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (12 - 12);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (12 - 12);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB9:
LAB8:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t9 = (t0 + 1032U);
    t11 = *((char **)t9);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 4940U);
    t15 = (t0 + 4908U);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t10, t14, (char)97, t11, t15, (char)101);
    t16 = (19U + 13U);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 3072);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t9, 32U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB3;

LAB5:    xsi_size_not_matching(32U, t16, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t9 = (t0 + 1032U);
    t11 = *((char **)t9);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 4956U);
    t15 = (t0 + 4908U);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t10, t14, (char)97, t11, t15, (char)101);
    t16 = (19U + 13U);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB10;

LAB11:    t18 = (t0 + 3072);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t9, 32U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB8;

LAB10:    xsi_size_not_matching(32U, t16, 0);
    goto LAB11;

}


extern void work_a_1758567153_1644550089_init()
{
	static char *pe[] = {(void *)work_a_1758567153_1644550089_p_0};
	xsi_register_didat("work_a_1758567153_1644550089", "isim/ProcesadorMonociclo_TB_isim_beh.exe.sim/work/a_1758567153_1644550089.didat");
	xsi_register_executes(pe);
}
