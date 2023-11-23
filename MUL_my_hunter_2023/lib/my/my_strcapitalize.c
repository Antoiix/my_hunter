/*
** EPITECH PROJECT, 2023
** my_strcapitalize.c
** File description:
** this file capitalizes all letters
** of a string given.
** created and edited by Antoine Orange.
** All rights reserved
*/

char char_up_case(char a)
{
    if (a >= 97 && a <= 122) {
        a = a - 32;
    }
    return a;
}

char char_low_case(char a)
{
    if (a >= 65 && a <= 90) {
        a = a + 32;
    }
    return a;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = char_up_case(str[i]);
            continue;
        }
        if (i == 0 || str[i - 1] == '+' || str[i - 1] == '-') {
            str[i] = char_up_case(str[i]);
            continue;
        }
        str[i] = char_low_case(str[i]);
    }
    return str;
}
