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
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, global->list_luma, global->player, window);
        if (event.type == sfEvtResized)
            resize(global, window, actual_scene);
        if (global->player->score >= 150)
            *actual_scene = 2;
    }
}

void destroy_all(global_t global, sfRenderWindow *window)
{
    sfMusic_destroy(global.list_music->music);
    sfRenderWindow_destroy(window);
}

void tostring(char str[], int num)
{
    int i;
    int rem;
    int len = 0;
    int n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

void player_score(player_t *player_stats, text_t *list_text)
{
    tostring(player_stats->str_score, player_stats->score);
    sfText_setString(get_text_index(list_text, 2)->text, player_stats->str_score);
}

void launch_game(global_t *global, sfRenderWindow *window)
{
    sfEvent event;
    int actual_scene = 0;
    sfIntRect rect = {0, 0, 233, 233};
    sfTime time;
    sfClock *clock_for_spawn = sfClock_create();

    title_init(global);
    game_init(global);
    luma_create(global, window);
    //global->player->score = 148;
    while (sfRenderWindow_isOpen(window)) {
        if (actual_scene == 1) {
            clock_luma_spawn(clock_for_spawn, global, window, time);
        }
        player_score(global->player, global->list_text);
        //my_printf("%i\n", global->player->score);
        analyse_events(window, event, &actual_scene, global);
        all_lumas_move_left(&rect, time, &actual_scene, global);
        sfRenderWindow_clear(window, sfBlack);
        draw_objects(global, window, actual_scene);
    }
}
