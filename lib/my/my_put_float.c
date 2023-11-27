/*
** EPITECH PROJECT, 2023
** my_put_float.c
** File description:
** this file prints a float with a length.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"

void my_put_float(double number, int precision)
{
    int left;
    int i = 0;
    int number2 = 0;

    if (number < 0) {
        number *= -1;
        my_putchar('-');
    }
    left = (long long)number;
    number = (number * my_compute_power_rec(10, precision)) + 0.1;
    my_put_nbr(left);
    my_putchar('.');
    number2 = (long long)number % my_compute_power_rec(10, precision);
    for (; number2 > 9; i++) {
        number2 /= 10;
    }
    for (; i - precision + 1 != 0; i++) {
        my_putchar('0');
    }
    my_put_nbr((long long)number % my_compute_power_rec(10, precision));
}
