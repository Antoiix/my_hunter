/*
** EPITECH PROJECT, 2023
** flags.c
** File description:
** this file do the o, u, x and X
** flags for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

void flag_o(va_list disp_params, int *count)
{
    char *octal = "01234567";

    my_pf_putnbr_base(va_arg(disp_params, int), octal, count);
}

void flag_u(va_list disp_params, int *count)
{
    char *decimal = "0123456789";

    my_pf_putnbr_base(va_arg(disp_params, int), decimal, count);
}

void flag_x(va_list disp_params, int *count)
{
    char *hexa = "0123456789abcdef";

    my_pf_putnbr_base(va_arg(disp_params, int), hexa, count);
}

void flag_x_upper(va_list disp_params, int *count)
{
    char *HEXA = "0123456789ABCDEF";

    my_pf_putnbr_base(va_arg(disp_params, int), HEXA, count);
}
