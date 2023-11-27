/*
** EPITECH PROJECT, 2023
** my.printf
** File description:
** This file is a recreated printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "my.h"

void verif_for_two_arg(int j, va_list disp_params, int *count)
{
    if (j <= 10) {
        list_flags[j].function(disp_params, count);
    }
}

void verif_for_three_arg(int j, va_list disp_params, int *count, int precision)
{
    if (j > 10) {
        list_flags[j].function(disp_params, precision, count);
    }
}

int verif_pf_precision(const char *format, int i, va_list disp_params, int *pj)
{
    int precision = 6;
    int prec_s = 0;
    int j = 0;
    char nbr[10];

    for (; my_isnum(format[i + 1]) == 1; i++) {
        nbr[j] = format[i + 1 + j];
        j++;
    }
    nbr[j + 1] = '\0';
    if (j != 0) {
        precision = my_getnbr(nbr);
    }
    *pj = j;
    return precision;
}

int verif_pf(const char *format, int i, va_list disp_params, int *count)
{
    int precision = 6;
    int pj = 0;

    if (format[i + 1] == '.') {
        precision = verif_pf_precision(format, i + 1, disp_params, &pj);
        pj++;
    }
    for (int j = 0; j != 15; j++) {
        if (format[i + pj + 1] == list_flags[j].flag) {
            verif_for_two_arg(j, disp_params, count);
            verif_for_three_arg(j, disp_params, count, precision);
            break;
        }
    }
    return pj;
}

int my_printf(const char *format, ...)
{
    va_list disp_params;
    int count = 0;

    va_start(disp_params, format);
    for (int i = 0; format[i] != '\0';) {
        if (format[i] == '%') {
            i += (verif_pf(format, i, disp_params, &count) + 2);
        } else {
        my_pf_putchar(format[i], &count);
        i++;
        }
    }
    va_end(disp_params);
    return count;
}
