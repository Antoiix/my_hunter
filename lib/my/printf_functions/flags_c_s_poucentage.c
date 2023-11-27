/*
** EPITECH PROJECT, 2023
** flags_c_s_%.c
** File description:
** this file do the c, s and %
** flags for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

void flag_c(va_list disp_params, int *count)
{
    my_pf_putchar((char)va_arg(disp_params, int), count);
}

void flag_s(va_list disp_params, int *count)
{
    my_pf_putstr(va_arg(disp_params, char *), count);
}

void flag_pourcentage(va_list disp_params __attribute_maybe_unused__,
    int *count)
{
    my_pf_putchar('%', count);
}
