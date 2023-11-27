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

void luma_create(global_t *global, sfRenderWindow *window)
{
    luma_t *luma;
    sfIntRect rect = {0, 0, 233, 233};
    int i = 0;
    sfColor color = {255, 255, 255, 255};

    //my_printf("rand : %i\n", rand() % 156 + 100);
    color.r = rand() % 206 + 50;
    color.g = rand() % 206 + 50;
    color.b = rand() % 206 + 50;
    add_node_luma(&global->list_luma, 1, sfSprite_create(),
        sfTexture_createFromFile("sources/spritesheet.png", NULL));
    while (get_luma_index(global->list_luma, i)->next != NULL || i == 0) {
        i++;
    }
    luma = get_luma_index(global->list_luma, i);
    sfSprite_setPosition(luma->luma, (sfVector2f)
        {(float)sfRenderWindow_getSize(window).x,
        ((float)(rand() % 76) / 100) *
        (float)(sfRenderWindow_getSize(window).y) + 65});
    sfSprite_setTexture(luma->luma, luma->texture, sfTrue);
    sfSprite_setTextureRect(luma->luma, rect);
    sfSprite_setColor(luma->luma, color);
    sfSprite_setScale(luma->luma, (sfVector2f)
        {(float)800 / 1920 * 0.5, (float)600 / 1080 * 0.5});
}

void luma_free(luma_t **list_luma)
{
    luma_t *temp = *list_luma;

    *list_luma = (*list_luma)->next;
    free(temp);
}

void luma_destroy(luma_t **list_luma)
{
    luma_t *current_luma = get_luma_index(*list_luma, 0);

    if (sfSprite_getPosition(current_luma->luma).x < -75) {
        luma_free(list_luma);
    }
}
