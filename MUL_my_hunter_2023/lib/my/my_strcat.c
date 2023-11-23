/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** this file cat a string after an
** other string.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    return dest;
}
