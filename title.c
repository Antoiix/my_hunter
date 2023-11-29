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
        keyboard_inputs(window);
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, global,
            actual_scene, window);
        if (event.type == sfEvtResized)
            resize(global, window, actual_scene);
        mouse_follow(window, global);
        if (global->player->nb_lives <= 0 && *actual_scene != 2) {
            *actual_scene = 2;
            sfMusic_play(get_music_index(global->list_music, 4)->music);
        }
        if (global->player->score >= 100 && *actual_scene != 3) {
            *actual_scene = 3;
            sfMusic_play(get_music_index(global->list_music, 5)->music);
        }
    }
}

void destroy_all(global_t global, sfRenderWindow *window, sfImage *image)
{
    sfClock_destroy(global.list_luma->clock_anim);
    sfImage_destroy(image);
    sfTexture_destroy(global.list_sprite->texture);
    sfText_destroy(global.list_text->text);
    sfSprite_destroy(global.list_sprite->sprite);
    sfMusic_destroy(global.list_music->music);
    sfRenderWindow_destroy(window);
}

void inttostr(char str[], int num)
{
    int i;
    int temp;
    int len = 0;
    int nt;

    nt = num;
    while (nt != 0) {
        len++;
        nt /= 10;
    }
    for (i = 0; i < len; i++) {
        temp = num % 10;
        num = num / 10;
        str[len - (i + 1)] = temp + '0';
    }
    str[len] = '\0';
}

void player_score(player_t *player_stats, text_t *list_text)
{
    inttostr(player_stats->str_score, player_stats->score);
    sfText_setString(get_text_index(list_text, 2)->text,
        player_stats->str_score);
    sfText_setString(get_text_index(list_text, 5)->text,
        player_stats->str_score);
}

int launch_game(global_t *global, sfRenderWindow *window)
{
    sfEvent event;
    int actual_scene = 0;
    sfTime time;
    sfClock *clock_for_spawn = sfClock_create();
    rosalina_t rosalina = {sfClock_create(), {0, 0, 320, 300}};

    if (all_inits(global) == 84)
        return 84;
    while (sfRenderWindow_isOpen(window)) {
        if (actual_scene == 1) {
            clock_luma_spawn(clock_for_spawn, global, time);
        }
        player_score(global->player, global->list_text);
        analyse_events(window, event, &actual_scene, global);
        all_lumas_move_left(time, &actual_scene, global);
        rosalina_anim(&global->list_sprite, &rosalina, time, &actual_scene);
        sfRenderWindow_clear(window, sfBlack);
        draw_objects(global, window, actual_scene);
    }
    return 0;
}
