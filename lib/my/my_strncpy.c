/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** this file copies n characters of a
** string in an another string.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_strlen_cpy(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j += 1;
    }
    return j;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i; i != n; i++) {
        dest[i] = src[i];
    }
    if (n > my_strlen_cpy(dest)) {
        dest[i] = '\0';
    }
    return dest;
}
