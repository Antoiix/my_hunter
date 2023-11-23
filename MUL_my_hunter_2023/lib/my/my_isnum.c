/*
** EPITECH PROJECT, 2023
** my_isnum.c
** File description:
** This file returns 1 if the character
** entered is a number.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include <unistd.h>

int my_isnum(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
