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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_2592010699;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_1242562249_init();
    ieee_p_0774719531_init();
    work_a_2055461089_3212880686_init();
    work_a_1991350011_3212880686_init();
    work_a_1796176005_0539587230_init();
    work_a_3219856015_3212880686_init();
    work_a_3616198661_2759040872_init();
    work_a_2166523021_3212880686_init();
    work_a_1758567153_1644550089_init();
    work_a_4015019049_3212880686_init();
    work_a_1196643129_1499595665_init();
    work_a_1554994704_3212880686_init();
    work_a_0934014609_3212880686_init();
    work_a_3961274036_0397955563_init();
    work_a_0332996886_3212880686_init();
    work_a_1266348149_2372691052_init();


    xsi_register_tops("work_a_1266348149_2372691052");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");

    return xsi_run_simulation(argc, argv);

}
