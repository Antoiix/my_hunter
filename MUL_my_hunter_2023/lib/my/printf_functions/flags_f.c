/*
** EPITECH PROJECT, 2023
** flags_d_i.c
** File description:
** this file do the f
** flag for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

void flag_f(va_list disp_params, int precision, int *count)
{
    if (precision == 0) {
        my_pf_put_float_pzero(va_arg(disp_params, double), count);
    }
    my_pf_put_float(va_arg(disp_params, double), precision, count);
}

void flag_f_upper(va_list disp_params, int precision, int *count)
{
    if (precision == 0) {
        my_pf_put_float_pzero(va_arg(disp_params, double), count);
    }
    my_pf_put_float(va_arg(disp_params, double), precision, count);
}
