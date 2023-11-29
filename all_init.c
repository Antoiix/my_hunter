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

void all_inits(global_t *global)
{
    title_init(global);
    game_init(global);
    button_init(global);
    luma_create(global);
}
