/*
** EPITECH PROJECT, 2023
** flags_e.c
** File description:
** this file do the e
** flag for printf.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

static void positive_or_negative(int power, double nb, int *count)
{
    if (nb > 1)
        my_pf_putchar('+', count);
    if (nb <= 1)
        my_pf_putchar('-', count);
}

static void print_nb_min(int p, int power, double nb, int *count)
{
    my_pf_putchar('-', count);
    my_pf_put_float(nb, p, count);
    my_pf_putchar('e', count);
    positive_or_negative(power, nb, count);
    if (power < 10)
        my_pf_putchar('0', count);
    my_pf_put_nbr(power, count);
}

static void print_nb_maj(int p, int power, double nb, int *count)
{
    my_pf_putchar('-', count);
    my_pf_put_float(nb, p, count);
    my_pf_putchar('E', count);
    positive_or_negative(power, nb, count);
    if (power < 10)
        my_pf_putchar('0', count);
    my_pf_put_nbr(power, count);
}

void print_min(int p, int power, double nb, int *count)
{
    my_pf_put_float(nb, p, count);
    my_pf_putchar('e', count);
    positive_or_negative(power, nb, count);
    if (power < 10)
        my_pf_putchar('0', count);
    my_pf_put_nbr(power, count);
}

void print_maj(int p, int power, double nb, int *count)
{
    my_pf_put_float(nb, p, count);
    my_pf_putchar('E', count);
    positive_or_negative(power, nb, count);
    if (power < 10)
        my_pf_putchar('0', count);
    my_pf_put_nbr(power, count);
}

void flag_e(va_list disp_params, int p, int *count)
{
    int power = 0;
    double nb = va_arg(disp_params, double);

    if (nb > 0) {
        while ((int)nb > 10) {
            nb = nb / 10;
            power++;
        }
        print_min(p, power, nb, count);
    }
    if (nb < 0) {
        nb *= -1;
        while ((int)nb > 10) {
            nb = nb / 10;
            power++;
        }
        print_nb_min(p, power, nb, count);
    }
}

void flag_upper_e(va_list disp_params, int p, int *count)
{
    int power = 0;
    double nb = va_arg(disp_params, double);

    if (nb > 0) {
        while ((int)nb > 10) {
            nb = nb / 10;
            power++;
        }
        print_maj(p, power, nb, count);
    }
    if (nb < 0) {
        nb *= -1;
        while ((int)nb > 10) {
            nb = nb / 10;
            power++;
        }
        print_nb_maj(p, power, nb, count);
    }
}
