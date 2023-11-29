/*
** EPITECH PROJECT, 2023
** all_init.c
** File description:
** this file contains all the
** necessary functions to init
** ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int all_inits(global_t *global)
{
    if (title_init(global) == 84)
        return 84;
    if (game_init(global) == 84)
        return 84;
    if (button_init(global) == 84)
        return 84;
    if (luma_create(global) == 84)
        return 84;
    return 0;
}
