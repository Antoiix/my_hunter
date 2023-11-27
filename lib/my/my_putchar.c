/*
** EPITECH PROJECT, 2023
** my_putchar.c
** File description:
** this file prints a character.
** created and edited by Antoine Orange.
** All rights reserved
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
