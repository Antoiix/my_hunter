/*
** EPITECH PROJECT, 2023
** text_list.c
** File description:
** this file contains all the
** necessary functions for the
** linked list text.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

text_t *init_node_text(int scene, sfText *text, char *string)
{
    text_t *tmp = malloc(sizeof(text_t));

    tmp->scene = scene;
    tmp->text = text;
    tmp->string = string;
    tmp->next = NULL;
    return tmp;
}

void add_node_text(text_t ***list, int scene, sfText *text,
    char *string)
{
    text_t *tmp = init_node_text(scene, text, string);
    text_t *head;

    if (!**list) {
        **list = tmp;
        return;
    }
    for (head = **list; head->next; head = head->next);
    head->next = tmp;
}

text_t *get_text_index(text_t *list, int index)
{
    for (int i = 0; list->next && i < index; i++)
        list = list->next;
    return list;
}
