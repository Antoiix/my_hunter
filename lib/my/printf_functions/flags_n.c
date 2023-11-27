/*
** EPITECH PROJECT, 2023
** flags_d_i.c
** File description:
** this file do the n
** flag for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/
#include "../my.h"

void flag_n(va_list disp_params, int *count)
{
    int *s = va_arg(disp_params, int *);

    *s = *count;
}
