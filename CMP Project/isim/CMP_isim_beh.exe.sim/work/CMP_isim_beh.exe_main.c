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
char *IEEE_P_3499444699;
char *IEEE_P_2592010699;
char *VL_P_2533777724;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004134447467_2073120511_init();
    xilinxcorelib_ver_m_00000000001358910285_4218324980_init();
    xilinxcorelib_ver_m_00000000001687936702_4285826714_init();
    xilinxcorelib_ver_m_00000000000277421008_3744575301_init();
    xilinxcorelib_ver_m_00000000001603977570_0015948529_init();
    work_m_00000000000403262735_2842284419_init();
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    vl_p_2533777724_init();
    work_a_0672452416_3212880686_init();
    work_a_3372567656_3212880686_init();
    work_a_4035473581_3212880686_init();
    work_a_2683404259_3212880686_init();
    work_a_3891487982_3212880686_init();
    work_a_3430011751_3212880686_init();
    work_a_2707137648_3212880686_init();
    work_a_3363942390_3212880686_init();


    xsi_register_tops("work_a_3363942390_3212880686");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");

    return xsi_run_simulation(argc, argv);

}
