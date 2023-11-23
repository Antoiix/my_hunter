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

void clock_luma_anim(sfIntRect *rect, sfClock *clock,
    sfTime time, float seconds)
{
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 200000.0;
    if (seconds > 1.0) {
        move_rect_luma(rect, 233, 233 * 6);
        sfClock_restart(clock);
    }
}

void clock_luma_move(sfSprite *sprite, sfClock *clock, sfTime time,
    float seconds)
{
    sfVector2f vector = {-25, 0};

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000.0;
    if (seconds > 1.0) {
        sfSprite_move(sprite, vector);
        sfClock_restart(clock);
    }
}
