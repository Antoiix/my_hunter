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

void my_pf_put_float(double number, int precision, int *count)
{
    int left;
    int i = 0;
    int number2 = 0;

    if (number < 0) {
        number *= -1;
        my_pf_putchar('-', count);
    }
    left = (long long)number;
    number = (number * my_compute_power_rec(10, precision)) + 0.1;
    my_pf_put_nbr(left, count);
    my_pf_putchar('.', count);
    number2 = (long long)number % my_compute_power_rec(10, precision);
    for (; number2 > 9; i++)
        number2 /= 10;
    for (; i - precision + 1 != 0; i++)
        my_pf_putchar('0', count);
    my_pf_put_nbr((long long)number %
        my_compute_power_rec(10, precision), count);
}
