/*
** EPITECH PROJECT, 2023
** my_str_isprintable.c
** File description:
** this file returns 1 if all of the
** characters are printable.
** created and edited by Antoine Orange
** All rights reserved
*/

int my_str_isprintable(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j += 1;
    }
    if (j == 0) {
        return 1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            return 0;
        }
    }
    return 1;
}
