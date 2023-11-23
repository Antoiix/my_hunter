/*
** EPITECH PROJECT, 2023
** mouse_click.c
** File description:
** this file contains all the
** necessary functions to react
** to a mouse click.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void manage_mouse_click(sfMouseButtonEvent event)
{
    printf("Mouse x=%d y=%d\n", event.x, event.y);
}
