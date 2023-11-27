/*
** EPITECH PROJECT, 2023
** my_compute_square_root.c
** File description:
** this file compute the square
** root of a number.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_compute_square_root(int nb)
{
    if (nb <= 0) {
        return 0;
    }
    if (nb == 1) {
        return 1;
    }
    for (int j = 1; j != nb; j++) {
        if (j * j == nb) {
            return j;
        }
    }
    return 0;
}
