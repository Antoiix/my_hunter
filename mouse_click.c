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

int in_luma(sfFloatRect rect, sfMouseButtonEvent event, sfRenderWindow *window)
{
    if (sfFloatRect_contains(&rect, event.x * 800 /
            (sfRenderWindow_getSize(window).x), event.y * 450 /
            (sfRenderWindow_getSize(window).y)))
        return 1;
    return 0;
}

void launch_music(global_t *global)
{
    sfMusic_stop(get_music_index(global->list_music, 3)->music);
    sfMusic_play(get_music_index(global->list_music, 3)->music);
}

void mouse_luma(sfMouseButtonEvent event, global_t *global,
    int *current_scene, sfRenderWindow *window)
{
    luma_t *luma;
    sfFloatRect rect;
    int luma_touch = 0;

    for (int i = 0; get_luma_index(global->list_luma, i)->next != NULL ||
        i == 0; i++) {
        luma = get_luma_index(global->list_luma, i);
        rect = sfSprite_getGlobalBounds(luma->luma);
        if (in_luma(rect, event, window) == 1) {
            luma_touch = 1;
            global->player->score = global->player->score + 1;
            launch_music(global);
            sfSprite_setPosition(luma->luma, (sfVector2f){-75, 0});
        }
    }
    if (luma_touch == 0 && *current_scene == 1) {
        sfMusic_stop(get_music_index(global->list_music, 2)->music);
        global->player->nb_lives = global->player->nb_lives - 1;
        sfMusic_play(get_music_index(global->list_music, 2)->music);
    }
}

void manage_mouse_click(sfMouseButtonEvent event, global_t *global,
    int *current_scene, sfRenderWindow *window)
{
    mouse_luma(event, global, current_scene, window);
    title_button_events(event, global, current_scene, window);
}
