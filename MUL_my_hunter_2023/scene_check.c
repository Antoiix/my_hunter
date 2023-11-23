/*
** EPITECH PROJECT, 2023
** scene_check.c
** File description:
** this file contains all the
** necessary functions for the
** check of scene.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int is_scene_sprite(global_t *global, int index, int scene)
{
    if (get_sprite_index(global->list_sprite, index)->scene == scene)
        return 1;
    else
        return 0;
}

int is_scene_text(global_t *global, int index, int scene)
{
    if (get_text_index(global->list_text, index)->scene == scene)
        return 1;
    else
        return 0;
}

int is_scene_music(global_t *global, int index, int scene)
{
    if (get_music_index(global->list_music, index)->scene == scene)
        return 1;
    else
        return 0;
}
