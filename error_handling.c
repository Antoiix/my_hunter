/*
** EPITECH PROJECT, 2023
** error_handling.c
** File description:
** this file contains all the
** necessary functions to check
** possible errors.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int tty_error(char **envp)
{
    for (int i = 0; envp[i] != NULL; i++) {
        if (my_strncmp(envp[i], "DISPLAY", 6) == 0)
            return 0;
    }
    return 84;
}
