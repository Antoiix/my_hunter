/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** this file swap two arguments.
** created and edited by Antoine Orange.
** All rights reserved
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
