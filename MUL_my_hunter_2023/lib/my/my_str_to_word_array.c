/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** this file puts all the words of a
** string into an array.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"
#include <stdio.h>

int is_alphanum(char c)
{
    if ('a' <= c && c <= 'z') {
        return 1;
    }
    if ('A' <= c && c <= 'Z') {
        return 1;
    }
    if ('0' <= c && c <= '9') {
        return 1;
    }
    return 0;
}

int words(char const *str)
{
    int sep_bef = 1;
    int nb_words = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 1 && sep_bef == 1) {
            sep_bef = 0;
            nb_words++;
        }
        if (is_alphanum(str[i]) == 0 && sep_bef == 0) {
            sep_bef = 1;
        }
    }
    return nb_words;
}

int nb_char_words(char const *str, int i)
{
    int sep_bef = 1;
    int nb_char = 0;

    for (i; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 1) {
            sep_bef = 0;
            nb_char++;
        }
        if (is_alphanum(str[i]) == 0 && sep_bef == 0) {
            return nb_char;
        }
    }
    return nb_char;
}

int nb_spaces(char const *str, int i)
{
    int j = 0;

    for (i; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 1) {
            return j;
        }
        j++;
    }
    return j;
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **array = NULL;
    int nb_words = words(str);
    int nb_char;
    int nb_spaces_j;

    array = malloc(sizeof(char *) * (nb_words + 1));
    for (i; i != nb_words; i++) {
        array[i] = malloc((sizeof(char)) * (nb_char_words(str, j) + 1));
        j += nb_spaces(str, j);
        for (k = 0; k != nb_char_words(str, j); k++) {
            array[i][k] = str[j + k];
        }
        array[i][k] = '\0';
        j += nb_char_words(str, j) + 1;
    }
    array[i] = 0;
    return array;
}
