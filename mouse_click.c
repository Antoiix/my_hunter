/*
** EPITECH PROJECT, 2023
** mouse_click.c
** File description:
** this file contains all the
** necessary functions to react
** to a mouse click.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void manage_mouse_click(sfMouseButtonEvent event, luma_t *list_luma, player_t *player_stats, sfRenderWindow *window)
{
    luma_t *luma;
    sfFloatRect rect;

    for (int i = 0; get_luma_index(list_luma, i)->next != NULL || i == 0; i++) {
        luma = get_luma_index(list_luma, i);
        rect = sfSprite_getGlobalBounds(luma->luma);
        if (sfFloatRect_contains(&rect, event.x * 800 / (sfRenderWindow_getSize(window).x), event.y * 450 / (sfRenderWindow_getSize(window).y))) {
            player_stats->score = player_stats->score + 1;
            sfSprite_setPosition(luma->luma, (sfVector2f){-75, 0});
        }
    }
}
