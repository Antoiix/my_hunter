/*
** EPITECH PROJECT, 2023
** game_init.c
** File description:
** this file contains all the
** necessary functions for the
** init of game ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void game_music_init(global_t *global)
{
    music_t *game_music;

    add_node_music(&global->list_music, 1,
        sfMusic_createFromFile("sources/violet_comet.ogg"));
    game_music = get_music_index(global->list_music, 1);
    sfMusic_setLoop(game_music->music, sfTrue);
    sfMusic_setVolume(game_music->music, 100);
    sfMusic_play(game_music->music);
}
