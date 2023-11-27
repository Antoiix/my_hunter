/*
** EPITECH PROJECT, 2023
** my_putnbr_base.c
** File description:
** this file prints a number given with
** a base given.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int j = 0;
    int i = 0;
    char nbr2[99999];

    if (nbr == 0) {
        write(1, base, 1);
        return 0;
    }
    if (nbr < 0) {
        write(1, "-", 1);
        nbr *= -1;
    }
    for (j; base[j] != '\0'; j++) {
    }
    for (j; nbr != 0; nbr = nbr / j) {
        nbr2[i] = base[nbr % j];
        i++;
    }
    my_revstr(&nbr2);
    my_putstr(&nbr2);
}
