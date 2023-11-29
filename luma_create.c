/*
** EPITECH PROJECT, 2023
** luma_create.c
** File description:
** this file contains all the
** necessary functions for
** create a luma.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void luma_setup(global_t *global, luma_t *luma, sfColor color, sfIntRect rect)
{
    sfSprite_setPosition(luma->luma, (sfVector2f)
        {800,
        (((float)(rand() % 61) / 100) *
        (float)(600)) + 45});
    sfSprite_setTexture(luma->luma, luma->texture, sfTrue);
    sfSprite_setTextureRect(luma->luma, rect);
    sfSprite_setColor(luma->luma, color);
    sfSprite_setScale(luma->luma, (sfVector2f)
        {(float)800 / 1920 * 0.5 * (1 / (float)
        (global->player->score * 0.01 + 1)),
        (float)450 / 1011 * 0.5 * (1 / (float)
        (global->player->score * 0.01 + 1))});
}

int luma_create(global_t *global)
{
    luma_t *luma;
    sfIntRect rect = {0, 0, 233, 233};
    int i = 0;
    sfColor color = {255, 255, 255, 255};
    sfTexture *texture = sfTexture_createFromFile
        ("sources/spritesheet.png", NULL);

    color.r = rand() % 206 + 50;
    color.g = rand() % 206 + 50;
    color.b = rand() % 206 + 50;
    if (texture == NULL)
        return 84;
    add_node_luma(&global->list_luma, 1, sfSprite_create(),
        texture);
    while (get_luma_index(global->list_luma, i)->next != NULL || i == 0) {
        i++;
    }
    luma = get_luma_index(global->list_luma, i);
    luma_setup(global, luma, color, rect);
    return 0;
}
