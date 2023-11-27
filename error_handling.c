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
    if (envp[0] == NULL)
        return 84;
    return 0;
}
