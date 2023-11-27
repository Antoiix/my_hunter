/*
** EPITECH PROJECT, 2023
** music_list.c
** File description:
** this file contains all the
** necessary functions for the
** linked list music.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

music_t *init_node_music(int scene, sfMusic *music)
{
    music_t *tmp = malloc(sizeof(music_t));

    tmp->scene = scene;
    tmp->music = music;
    tmp->next = NULL;
    return tmp;
}

void add_node_music(music_t **list, int scene, sfMusic *music)
{
    music_t *tmp = init_node_music(scene, music);
    music_t *head;

    if (!*list) {
        *list = tmp;
        return;
    }
    for (head = *list; head->next; head = head->next);
    head->next = tmp;
}

music_t *get_music_index(music_t *list, int index)
{
    for (int i = 0; list->next && i < index; i++)
        list = list->next;
    return list;
}
