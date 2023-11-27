/*
** EPITECH PROJECT, 2023
** my_find_prime_sup.c
** File description:
** this file returns the next prime
** number of a given number.
** created and edited by Antoine Orange.
** All rights reserved
*/

int my_is_prime2(int nb)
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

int my_find_prime_sup(int nb)
{
    int i = 0;

    for (i; my_is_prime2(nb + i) == 0; i++) {
    }
    return nb + i;
}
