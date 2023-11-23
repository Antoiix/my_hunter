/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** this file cat n characters of a string
** in an another string.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);

    for (int i = 0; i != nb || src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    return dest;
}
