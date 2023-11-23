/*
** EPITECH PROJECT, 2023
** flags_d_i.c
** File description:
** this file do the p
** flag for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/
#include "../my.h"

void flag_p(va_list disp_params, int *count)
{
    my_pf_putstr("0x", count);
    my_putpointer_base_hexa((unsigned long long)va_arg(disp_params, void *),
        "0123456789abcdef", count);
}
