/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** this file returns a pointer to the
** first occur of a parameter in a
** string given.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_strncmp2(char const *s1, char const *s2, int n)
{
    for (int i = 0; i != n; i++) {
        if (s1[i] == '\0' || s2[i] == '\0') {
            return s1[i] - s2[i];
        }
        if (s1[i] - s2[i] != 0) {
            return s1[i] - s2[i];
        }
    }
    return 0;
}

int my_strlen_strstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

char *my_strstr(char *str, char const *to_find)
{
    if (my_strlen_strstr(str) < my_strlen_strstr(to_find)) {
        return 0;
    }
    if (my_strlen_strstr(to_find) == 0) {
        return str;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\0') {
            return 0;
        }
        if (my_strncmp2(str + i, to_find, my_strlen_strstr(to_find)) == 0) {
            return str + i;
        }
    }
}
