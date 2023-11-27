/*
** EPITECH PROJECT, 2023
** my_str_islower.c
** File description:
** this file returns 1 if all of the
** characters of a string are lower letters.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_str_islower(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j += 1;
    }
    if (j == 0) {
        return 1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97 || str[i] > 122) {
            return 0;
        }
    }
    return 1;
}
