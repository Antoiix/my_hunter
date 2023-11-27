/*
** EPITECH PROJECT, 2023
** luma_list.c
** File description:
** this file contains all the
** necessary functions for the
** linked list luma.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

luma_t *init_node_luma(int scene, sfSprite *luma,
    sfTexture *texture)
{
    luma_t *tmp = malloc(sizeof(luma_t));

    tmp->scene = scene;
    tmp->luma = luma;
    tmp->texture = texture;
    tmp->clock_anim = sfClock_create();
    tmp->rect = (sfIntRect){0, 0, 233, 233};
    tmp->vector = (sfVector2f){-3, 0};
    tmp->next = NULL;
    return tmp;
}

void add_node_luma(luma_t **list, int scene, sfSprite *luma,
    sfTexture *texture)
{
    luma_t *tmp = init_node_luma(scene, luma, texture);
    luma_t *head;

    if (!*list) {
        *list = tmp;
        return;
    }
    for (head = *list; head->next; head = head->next);
    head->next = tmp;
}

luma_t *get_luma_index(luma_t *list, int index)
{
    for (int i = 0; list->next && i < index; i++)
        list = list->next;
    return list;
}
