/*
** EPITECH PROJECT, 2023
** button_init.c
** File description:
** this file contains all the
** necessary functions for the
** init of buttons ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int cursor_sprite_init(sprite_t **list_sprite)
{
    sprite_t *cursor;
    sfTexture *texture = sfTexture_createFromFile
            ("sources/star.png", NULL);

    if (texture == NULL)
        return 84;
    add_node_sprite(&list_sprite, 0,
        sfSprite_create(), texture);
    cursor = get_sprite_index(*list_sprite, 2);
    sfSprite_setTexture(cursor->sprite, cursor->texture, sfTrue);
    sfSprite_setScale(cursor->sprite, (sfVector2f)
        {0.03, 0.03});
    sfSprite_setOrigin(cursor->sprite, (sfVector2f)
        {sfTexture_getSize(cursor->texture).x / 2,
        sfTexture_getSize(cursor->texture).y / 2});
    return 0;
}

int start_button_init(sprite_t **list_sprite)
{
    sprite_t *start_button;
    sfTexture *texture = sfTexture_createFromFile
            ("sources/start_button.png", NULL);

    if (texture == NULL)
        return 84;
    add_node_sprite(&list_sprite, 0,
        sfSprite_create(), texture);
    start_button = get_sprite_index(*list_sprite, 6);
    sfSprite_setTexture(start_button->sprite, start_button->texture, sfTrue);
    sfSprite_move(start_button->sprite, (sfVector2f){175, 150});
    sfSprite_setScale(start_button->sprite, (sfVector2f)
        {0.3, 0.3});
    return 0;
}
