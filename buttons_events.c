/*
** EPITECH PROJECT, 2023
** buttons_events.c
** File description:
** this file contains all the
** necessary functions to react
** at the buttons on the menu.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void title_button_events(sfMouseButtonEvent event, global_t *global,
    int *current_scene, sfRenderWindow *window)
{
    sprite_t *start_button;
    sfFloatRect rect;

    start_button = get_sprite_index(global->list_sprite, 6);
    rect = sfSprite_getGlobalBounds(start_button->sprite);
    if (sfFloatRect_contains(&rect, event.x * 800 /
            (sfRenderWindow_getSize(window).x), event.y * 450 /
            (sfRenderWindow_getSize(window).y)) && *current_scene == 0) {
        sfMusic_play(get_music_index(global->list_music, 1)->music);
        *current_scene = 1;
    }
}
