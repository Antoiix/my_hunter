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
            manage_mouse_click(event.mouseButton);
    }
}

void destroy_all(global_t global, sfRenderWindow *window)
{
    sfMusic_destroy(global.list_music->music);
    sfRenderWindow_destroy(window);
}

void player_score(player_t *player_stats, text_t *list_text) {
    int current_score = player_stats->score;
    int score = 0;
    int size_for_malloc = 0;
    char *str;
    int i = 0;

    for (; current_score >= 10; size_for_malloc++)
        current_score %= 10;
    str = malloc(sizeof(char) * (size_for_malloc + 1));
    for (current_score = player_stats->score; current_score >= 10; i++) {
        score = current_score % 10;
        current_score /= 10;
        str[i] = score + 48;
    }
    str[i] = '0';
    str[i + 1] = '\0';
    player_stats->str_score = str;
    sfText_setString(get_text_index(list_text, 2)->text, str);
    //my_printf("%s\n", player_stats->str_score);
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
    while (sfRenderWindow_isOpen(window)) {
        if (actual_scene == 1) {
            clock_luma_spawn(clock_for_spawn, global, window, time);
        }
        player_score(global->player, global->list_text);
        //my_printf("%s\n", global->player->str_score);
        luma_destroy(&global->list_luma);
        analyse_events(window, event, &actual_scene, global);
        all_lumas_move_left(&rect, time, &actual_scene, global);
        sfRenderWindow_clear(window, sfBlack);
        draw_objects(global, window, actual_scene);
    }
}
