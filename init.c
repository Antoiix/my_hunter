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

void global_init(global_t *global, player_t *player_stats)
{
    global->list_sprite = NULL;
    global->list_text = NULL;
    global->list_music = NULL;
    global->list_luma = NULL;
    global->player = player_stats;
}

void title_init(global_t *global)
{
    title_music_init(global);
    background_title_init(&global->list_sprite);
    title_text_init(&global->list_text);
}

void game_init(global_t *global)
{
    game_music_init(global);
    background_game_init(&global->list_sprite);
    score_text_init(&global->list_text);
    score_text_number_init(&global->list_text, global->player);
}