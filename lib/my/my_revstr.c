/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** this file reverses all characters of
** a string given.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_strlen_rev(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

void my_swap2(char *a, char *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int i = my_strlen_rev(str) - 1;
    int j = 0;

    while (i > j) {
        my_swap2(&str[i], &str[j]);
        i = i - 1;
        j = j + 1;
    }
    return str;
}
