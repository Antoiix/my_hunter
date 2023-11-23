/*
** EPITECH PROJECT, 2023
** sprite_list.c
** File description:
** this file contains all the
** necessary functions for the
** linked list sprite.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

sprite_t *init_node_sprite(int scene, sfSprite *sprite,
    sfTexture *texture)
{
    sprite_t *tmp = malloc(sizeof(sprite_t));

    tmp->scene = scene;
    tmp->sprite = sprite;
    tmp->texture = texture;
    tmp->next = NULL;
    return tmp;
}

void add_node_sprite(sprite_t **list, int scene, sfSprite *sprite,
    sfTexture *texture)
{
    sprite_t *tmp = init_node_sprite(scene, sprite, texture);
    sprite_t *head;

    if (!*list) {
        *list = tmp;
        return;
    }
    for (head = *list; head->next; head = head->next);
    head->next = tmp;
}

sprite_t *get_sprite_index(sprite_t *list, int index)
{
    for (int i = 0; list->next && i < index; i++)
        list = list->next;
    return list;
}
