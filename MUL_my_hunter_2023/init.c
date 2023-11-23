/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** this file contains all the
** necessary functions for the
** init of constant ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void global_init(global_t *global)
{
    global->list_sprite = NULL;
    global->list_text = NULL;
    global->list_music = NULL;
}

void title_init(global_t *global)
{
    title_music_init(global);
    background_title_init(global);
    title_text_init(global);
}

void game_init(global_t *global)
{
    game_music_init(global);
}
