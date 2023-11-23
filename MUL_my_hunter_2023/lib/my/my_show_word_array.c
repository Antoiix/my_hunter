/*
** EPITECH PROJECT, 2023
** my_show_word_array.c
** File description:
** this file shows all of the words
** in a array.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
}
