/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** this file prints a number given.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include <unistd.h>

void my_putchar3(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    long int nb2 = nb;

    if (nb2 < 0) {
        nb2 *= -1;
        my_putchar3(45);
    }
    if (nb2 >= 10) {
        my_put_nbr(nb2 / 10);
        my_putchar3(nb2 % 10 + 48);
    } else {
        my_putchar3(nb2 + 48);
    }
    return 0;
}
