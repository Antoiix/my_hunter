/*
** EPITECH PROJECT, 2023
** my_str_isupper.c
** File description:
** this file returns 1 if all of the
** characters are upper letters.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_str_isupper(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j += 1;
    }
    if (j == 0) {
        return 1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90) {
            return 0;
        }
    }
    return 1;
}
