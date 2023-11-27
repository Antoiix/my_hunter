/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** this file prints a string given.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include <unistd.h>

void my_putchar4(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar4(str[i]);
        i += 1;
    }
    return 0;
}
