/*
** EPITECH PROJECT, 2023
** my_pf_putnbr_base.c
** File description:
** this file prints a number given with
** a base given and a pointer.
** created and edited by Antoine Orange
** and Pauline Seret.
** All rights reserved
*/

#include "../my.h"

int my_pf_putnbr_base(int nbr, char const *base, int *count)
{
    int j = 0;
    int i = 0;
    char nbr2[99999];

    if (nbr == 0) {
        my_pf_putchar(base[0], count);
        return 0;
    }
    if (nbr < 0) {
        my_pf_putchar('-', count);
        nbr *= -1;
    }
    for (; base[j] != '\0'; j++);
    for (; nbr != 0; nbr = nbr / j) {
        nbr2[i] = base[nbr % j];
        i++;
        nbr2[i] = '\0';
    }
    my_revstr(nbr2);
    my_pf_putstr(nbr2, count);
}
