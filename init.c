/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** this file contains all the
** necessary functions for the
** init of constant ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int global_init(global_t *global, player_t *player_stats, sfImage *icon)
{
    global->list_sprite = NULL;
    global->list_text = NULL;
    global->list_music = NULL;
    global->list_luma = NULL;
    global->player = player_stats;
    if (icon == NULL)
        return 84;
    return 0;
}

int title_init(global_t *global)
{
    int a[3];

    a[0] = title_music_init(global);
    a[1] = background_title_init(&global->list_sprite);
    a[2] = title_text_init(&global->list_text);
    for (int i = 0; i != 3; i++) {
        if (a[i] == 84)
            return 84;
    }
    return 0;
}

int game_init(global_t *global)
{
    int a[10];

    a[0] = game_music_init(global);
    a[1] = background_game_init(&global->list_sprite);
    a[2] = score_text_init(&global->list_text);
    a[3] = score_text_number_init(&global->list_text, global->player);
    a[4] = cursor_sprite_init(&global->list_sprite);
    a[5] = fheart_init(&global->list_sprite);
    a[6] = sheart_init(&global->list_sprite);
    a[7] = theart_init(&global->list_sprite);
    a[8] = lose_life_music_init(global);
    a[9] = save_luma_music_init(global);
    for (int i = 0; i != 10; i++) {
        if (a[i] == 84)
            return 84;
    }
    return 0;
}

int button_init(global_t *global)
{
    int a[11];

    a[0] = start_button_init(&global->list_sprite);
    a[1] = background_lose_init(&global->list_sprite);
    a[2] = lose_text_init(&global->list_text);
    a[3] = esc_text_init(&global->list_text);
    a[4] = lose_nb_init(&global->list_text);
    a[5] = lose_music_init(global);
    a[6] = background_win_init(&global->list_sprite);
    a[7] = win_music_init(global);
    a[8] = twoesc_text_init(&global->list_text);
    a[9] = rosalina_win_init(&global->list_sprite);
    a[10] = secret_text_init(&global->list_text);
    for (int i = 0; i != 11; i++) {
        if (a[i] == 84)
            return 84;
    }
    return 0;
}
