/*
** EPITECH PROJECT, 2023
** my_computer_power_rec.c
** File description:
** this file compute a power
** p of a number nb.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
