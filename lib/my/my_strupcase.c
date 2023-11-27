/*
** EPITECH PROJECT, 2023
** my_strupcase.c
** File description:
** this file changes all letters of a
** string on upper letters.
** created and edited by Antoine Orange.
** All rights reserved
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
