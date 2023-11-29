/*
** EPITECH PROJECT, 2023
** title.c
** File description:
** this file contains all the
** necessary functions for
** anime a luma.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void move_rect_luma(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= max_value)
        rect->left = 0;
}

void clock_luma_spawn(sfClock *clock, global_t *global,
    sfTime time)
{
    int i = 0;

    time = sfClock_getElapsedTime(clock);
    while (get_luma_index(global->list_luma, i)->next != NULL || i == 0) {
        i++;
    }
    if (time.microseconds / (250000 + (global->player->score * 5000)) > 0.01) {
        luma_create(global);
        sfClock_restart(clock);
    }
}

void clock_luma_anim(sfIntRect *rect, sfClock *clock,
    sfTime time)
{
    time = sfClock_getElapsedTime(clock);
    if ((time.microseconds / 200000.0) > 1.0) {
        move_rect_luma(rect, 233, 233 * 6);
        sfClock_restart(clock);
    }
}

void all_lumas_move_left(sfTime time,
    int *current_scene, global_t *global)
{
    luma_t *luma;

    for (int i = 0; get_luma_index(global->list_luma, i)->next != NULL ||
        i == 0; i++) {
        if (*current_scene == 1) {
            luma = get_luma_index(global->list_luma, i);
            clock_luma_anim(&luma->rect, luma->clock_anim, time);
            sfSprite_setTextureRect(luma->luma, luma->rect);
            luma->vector.x = -3 - (0.02 * global->player->score);
            sfSprite_move(luma->luma, luma->vector);
        }
    }
}
