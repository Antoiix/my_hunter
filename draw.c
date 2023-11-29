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

void draw_title_screen(global_t *global, sfRenderWindow *window,
    int actual_scene)
{
    if (is_scene_sprite(global, 0, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        0)->sprite, NULL);
    if (is_scene_sprite(global, 6, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        6)->sprite, NULL);
    if (is_scene_text(global, 0, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
        0)->text, NULL);
}

void draw_game(global_t *global, sfRenderWindow *window, int actual_scene,
    int nb_lives)
{
    if (is_scene_sprite(global, 1, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        1)->sprite, NULL);
    if (is_scene_text(global, 1, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            1)->text, NULL);
    if (is_scene_text(global, 2, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            2)->text, NULL);
    if (is_scene_sprite(global, 3, actual_scene) == 1 && nb_lives > 0)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        3)->sprite, NULL);
    if (is_scene_sprite(global, 4, actual_scene) == 1 && nb_lives > 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        4)->sprite, NULL);
    if (is_scene_sprite(global, 5, actual_scene) == 1 && nb_lives > 2)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        5)->sprite, NULL);
}

void draw_lose(global_t *global, sfRenderWindow *window, int actual_scene)
{
    if (is_scene_sprite(global, 7, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        7)->sprite, NULL);
    if (is_scene_text(global, 3, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            3)->text, NULL);
    if (is_scene_text(global, 4, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            4)->text, NULL);
    if (is_scene_text(global, 5, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
            5)->text, NULL);
}

void draw_win(global_t *global, sfRenderWindow *window, int actual_scene)
{
    if (is_scene_sprite(global, 8, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        8)->sprite, NULL);
    if (is_scene_text(global, 6, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
        6)->text, NULL);
    if (is_scene_sprite(global, 9, actual_scene) == 1)
        sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        9)->sprite, NULL);
    if (is_scene_text(global, 7, actual_scene) == 1)
        sfRenderWindow_drawText(window, get_text_index(global->list_text,
        7)->text, NULL);
}

void draw_objects(global_t *global, sfRenderWindow *window, int actual_scene)
{
    if (is_scene_music(global, 0, actual_scene) == 0)
        sfMusic_pause(get_music_index(global->list_music, 0)->music);
    if (is_scene_music(global, 1, actual_scene) == 0)
        sfMusic_pause(get_music_index(global->list_music, 1)->music);
    draw_title_screen(global, window, actual_scene);
    draw_game(global, window, actual_scene, global->player->nb_lives);
    for (int i = 0; get_luma_index(global->list_luma, i)->next != NULL ||
        i == 0; i++) {
        if (is_scene_luma(global, 1, actual_scene) == 1)
            sfRenderWindow_drawSprite(window, get_luma_index(global->list_luma,
            i)->luma, NULL);
        }
    draw_lose(global, window, actual_scene);
    draw_win(global, window, actual_scene);
    sfRenderWindow_drawSprite(window, get_sprite_index(global->list_sprite,
        2)->sprite, NULL);
    sfSprite_rotate(get_sprite_index(global->list_sprite, 2)->sprite, 2.5);
    sfRenderWindow_display(window);
}
