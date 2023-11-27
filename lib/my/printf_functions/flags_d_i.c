/*
** EPITECH PROJECT, 2023
** flags_d_i.c
** File description:
** this file do the d and i
** flags for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

void flag_i(va_list disp_params, int *count)
{
    my_pf_put_nbr(va_arg(disp_params, int), count);
}

void flag_d(va_list disp_params, int *count)
{
    my_pf_put_nbr(va_arg(disp_params, int), count);
}
