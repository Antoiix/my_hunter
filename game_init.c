/*
** EPITECH PROJECT, 2023
** game_init.c
** File description:
** this file contains all the
** necessary functions for the
** init of game ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int game_music_init(global_t *global)
{
    music_t *game_music;
    sfMusic *music = sfMusic_createFromFile
        ("sources/violet_comet.ogg");

    if (music == NULL)
        return 84;
    add_node_music(&global->list_music, 1,
        music);
    game_music = get_music_index(global->list_music, 1);
    sfMusic_setLoop(game_music->music, sfTrue);
    sfMusic_setVolume(game_music->music, 60);
    return 0;
}

int background_game_init(sprite_t **list_sprite)
{
    sprite_t *background;
    sfTexture *texture = sfTexture_createFromFile
            ("sources/game_background.png", NULL);

    if (texture == NULL)
        return 84;
    add_node_sprite(&list_sprite, 1,
        sfSprite_create(), texture);
    background = get_sprite_index(*list_sprite, 1);
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_setScale(background->sprite, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
    return 0;
}

int score_text_init(text_t **list_text)
{
    text_t *title_text;
    sfFont *font = sfFont_createFromFile
            ("sources/galaxy.ttf");

    if (font == NULL)
        return 84;
    add_node_text(&list_text, 1, sfText_create(), "Score :");
    title_text = get_text_index(*list_text, 1);
    sfText_setString(title_text->text, title_text->string);
    sfText_setFont(title_text->text, font);
    sfText_move(title_text->text, (sfVector2f){10, 0});
    sfText_setCharacterSize(title_text->text, 75);
    sfText_setColor(title_text->text, sfWhite);
    sfText_setScale(title_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
    return 0;
}

int score_text_number_init(text_t **list_text, player_t *player_stats)
{
    text_t *title_text;
    sfFont *font = sfFont_createFromFile
            ("sources/galaxy.ttf");

    if (font == NULL)
        return 84;
    add_node_text(&list_text, 1, sfText_create(), player_stats->str_score);
    title_text = get_text_index(*list_text, 2);
    sfText_setString(title_text->text, title_text->string);
    sfText_setFont(title_text->text, font);
    sfText_move(title_text->text, (sfVector2f){175, 0});
    sfText_setCharacterSize(title_text->text, 75);
    sfText_setColor(title_text->text, sfWhite);
    sfText_setScale(title_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
    return 0;
}
