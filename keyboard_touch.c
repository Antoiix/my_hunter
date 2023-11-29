/*
** EPITECH PROJECT, 2023
** keyboard_touch.c
** File description:
** this file contains all the
** necessary functions to detect
** and react at key inputs.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void mouse_follow(sfRenderWindow *window, global_t *global)
{
    sfSprite_setPosition(get_sprite_index(global->list_sprite, 2)->sprite,
        (sfVector2f){(float)sfMouse_getPositionRenderWindow(window).x *
        (800.0 / (float)sfRenderWindow_getSize(window).x),
        (float)sfMouse_getPositionRenderWindow(window).y *
        (450.0 / (float)sfRenderWindow_getSize(window).y)});
}

void keyboard_inputs(sfRenderWindow *window, global_t *global)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(window);
}
