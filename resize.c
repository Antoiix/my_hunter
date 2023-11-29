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

void resize(global_t *global, sfRenderWindow *window, int *actual_scene)
{
    float x = sfRenderWindow_getSize(window).x;
    float y = sfRenderWindow_getSize(window).y;

    if (x < 800 || y < 450 || x > 1920 || y > 1080) {
        *actual_scene = -1;
        my_printf("Please resize the window\n");
    } else if (*actual_scene == -1) {
        *actual_scene = 0;
        sfMusic_play(get_music_index(global->list_music, 0)->music);
    }
}
