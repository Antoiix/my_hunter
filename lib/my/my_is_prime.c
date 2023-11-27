/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** this file returns 1 if the number given
** is a prime number, 0 if is not.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_is_prime(int nb)
{
    int n = 0;

    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i != nb; i++) {
        if (n > 0) {
            return 0;
        }
        if (nb % i == 0) {
            n += 1;
        }
    }
    return 1;
}
