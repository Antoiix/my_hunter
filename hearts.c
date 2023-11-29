/*
** EPITECH PROJECT, 2023
** hearts.c
** File description:
** this file contains all the
** necessary functions for the
** hearts init.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void fheart_init(sprite_t **list_sprite)
{
    sprite_t *heart;

    add_node_sprite(&list_sprite, 1,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/heart.png", NULL));
    heart = get_sprite_index(*list_sprite, 3);
    sfSprite_setTexture(heart->sprite, heart->texture, sfTrue);
    sfSprite_move(heart->sprite, (sfVector2f){635, 5});
    sfSprite_setScale(heart->sprite, (sfVector2f)
        {0.3, 0.3});
}

void sheart_init(sprite_t **list_sprite)
{
    sprite_t *heart;

    add_node_sprite(&list_sprite, 1,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/heart.png", NULL));
    heart = get_sprite_index(*list_sprite, 4);
    sfSprite_setTexture(heart->sprite, heart->texture, sfTrue);
    sfSprite_move(heart->sprite, (sfVector2f){690, 5});
    sfSprite_setScale(heart->sprite, (sfVector2f)
        {0.3, 0.3});
}

void theart_init(sprite_t **list_sprite)
{
    sprite_t *heart;

    add_node_sprite(&list_sprite, 1,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/heart.png", NULL));
    heart = get_sprite_index(*list_sprite, 5);
    sfSprite_setTexture(heart->sprite, heart->texture, sfTrue);
    sfSprite_move(heart->sprite, (sfVector2f){745, 5});
    sfSprite_setScale(heart->sprite, (sfVector2f)
        {0.3, 0.3});
}
