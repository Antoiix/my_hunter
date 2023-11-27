/*
** EPITECH PROJECT, 2023
** my_sort_int_array.c
** File description:
** this file sorts an int array.
** created and edited by Antoine Orange.
** All rights reserved
*/

void my_swap_array(int *a, int *b)
{
    int c = *a;

    if (*a > *b) {
        *a = *b;
        *b = c;
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            my_swap_array(&array[j], &array[j + 1]);
        }
    }
}
