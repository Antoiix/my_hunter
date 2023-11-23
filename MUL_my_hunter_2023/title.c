/*
** EPITECH PROJECT, 2023
** title.c
** File description:
** this file contains all the
** necessary functions to launch
** the title.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void analyse_events(sfRenderWindow *window, sfEvent event,
    int *actual_scene, global_t *global)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeyA)) {
            sfMusic_play(get_music_index(global->list_music, 0)->music);
            *actual_scene = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyZ)) {
            sfMusic_play(get_music_index(global->list_music, 1)->music);
            *actual_scene = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            manage_mouse_click(event.mouseButton);
    }
}

void destroy_all(global_t global, sfRenderWindow *window)
{
    sfMusic_destroy(global.list_music->music);
    sfRenderWindow_destroy(window);
}

void launch_game(global_t *global, sfRenderWindow *window)
{
    sfEvent event;
    int actual_scene = 0;

    title_init(global);
    game_init(global);
    while (sfRenderWindow_isOpen(window)) {
        analyse_events(window, event, &actual_scene, global);
        sfRenderWindow_clear(window, sfBlack);
        draw_objects(global, window, actual_scene);
    }
}
