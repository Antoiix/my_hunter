/*
** EPITECH PROJECT, 2023
** my_pf_put_float.c
** File description:
** this file prints a float with a length
** and add one at a pointer counter.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

void my_pf_put_float_pzero(double number, int *count)
{
    int left;

    if (number < 0) {
        number *= -1;
        my_pf_putchar('-', count);
    }
    left = (long long)number;
    my_pf_put_nbr(left, count);
}
