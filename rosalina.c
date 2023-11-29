/*
** EPITECH PROJECT, 2023
** rosalina.c
** File description:
** this file contains all the
** necessary functions for the
** rosalina animation.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void move_rect_rosalina(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= max_value)
        rect->left = 0;
}

void clock_rosalina_anim(sfIntRect *rect, sfClock *clock,
    sfTime time)
{
    time = sfClock_getElapsedTime(clock);
    if ((time.microseconds / 100000.0) > 1.0) {
        move_rect_rosalina(rect, 320, 320 * 38);
        sfClock_restart(clock);
    }
}

void rosalina_anim(sprite_t **list_sprite, rosalina_t *rosalina,
    sfTime time, int *current_scene)
{
    if (*current_scene == 3) {
        clock_rosalina_anim(&rosalina->rect, rosalina->clock, time);
        sfSprite_setTextureRect(get_sprite_index(*list_sprite, 9)->sprite,
            rosalina->rect);
    }
}
