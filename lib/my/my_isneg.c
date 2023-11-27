/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** this file prints N or P if the number
** is negative or positive.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include <unistd.h>

void my_putchar2(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar2(80);
    } else {
        my_putchar2(78);
    }
    my_putchar2('\n');
    return 0;
}
