/*
** EPITECH PROJECT, 2023
** my_putpointer_base_hexa.c
** File description:
** this file prints a pointer in
** hexadecimal base.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "my.h"

int my_putpointer_base_hexa(unsigned long long nbr,
    char const *base, int *count)
{
    int j = 0;
    int i = 0;
    char nbr2[99999];

    if (nbr == 0) {
        my_pf_putchar(base, count);
        return 0;
    }
    if (nbr < 0) {
        my_pf_putchar('-', count);
        nbr *= -1;
    }
    for (j; base[j] != '\0'; j++) {
    }
    for (j; nbr != 0; nbr = nbr / j) {
        nbr2[i] = base[nbr % j];
        i++;
    }
    my_revstr(&nbr2);
    my_pf_putstr(&nbr2, count);
}
