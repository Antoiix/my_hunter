/*
** EPITECH PROJECT, 2023
** draw.c
** File description:
** this file contains all the
** necessary functions for draw
** objects.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void draw_lumas(global_t *global, sfRenderWindow *window, int actual_scene)
{
    for (int i = 0; get_luma_index(global->list_luma, i)->next != NULL ||
        i == 0; i++) {
        if (is_scene_luma(global, 1, actual_scene) == 1)
            sfRenderWindow_drawSprite(window, get_luma_index(global->list_luma,
            i)->luma, NULL);
    }
}

void draw_objects(global_t *global, sfRenderWindow *window, int actual_scene)
{
    if (is_scene_music(global, 0, actual_scene) == 0)
        sfMusic_pause(get_music_index(global->list_music, 0)->music);
    if (is_scene_music(global, 1, actual_scene) == 0)
        sfMusic_pause(get_music_index(global->list_music, 1)->music);
    if (is_scene_sprite(global, 0, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
            0)->sprite, NULL);
    if (is_scene_sprite(global, 1, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
            1)->sprite, NULL);
    draw_lumas(global, window, actual_scene);
    if (is_scene_text(global, 0, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            0)->text, NULL);
    if (is_scene_text(global, 1, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            1)->text, NULL);
    if (is_scene_text(global, 2, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            2)->text, NULL);
    sfRenderWindow_display(window);
}
