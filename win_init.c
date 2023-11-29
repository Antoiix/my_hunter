/*
** EPITECH PROJECT, 2023
** win_init.c
** File description:
** this file contains all the
** necessary functions for
** init win screen.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void background_win_init(sprite_t **list_sprite)
{
    sprite_t *background_win;

    add_node_sprite(&list_sprite, 3,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/win_wallpaper.png", NULL));
    background_win = get_sprite_index(*list_sprite, 8);
    sfSprite_setTexture(background_win->sprite,
        background_win->texture, sfTrue);
    sfSprite_setScale(background_win->sprite, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void twoesc_text_init(text_t **list_text)
{
    text_t *esc_text;

    add_node_text(&list_text, 3, sfText_create(), "ESC to quit");
    esc_text = get_text_index(*list_text, 6);
    sfText_setString(esc_text->text, esc_text->string);
    sfText_setFont(esc_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(esc_text->text, (sfVector2f){640, 420});
    sfText_setCharacterSize(esc_text->text, 45);
    sfText_setColor(esc_text->text, sfWhite);
    sfText_setScale(esc_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void win_music_init(global_t *global)
{
    music_t *game_music;

    add_node_music(&global->list_music, 3,
        sfMusic_createFromFile("sources/sad_story.ogg"));
    game_music = get_music_index(global->list_music, 5);
    sfMusic_setLoop(game_music->music, sfTrue);
    sfMusic_setVolume(game_music->music, 20);
}

void rosalina_win_init(sprite_t **list_sprite)
{
    sprite_t *rosalina_win;

    add_node_sprite(&list_sprite, 3,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/rosalina.png", NULL));
    rosalina_win = get_sprite_index(*list_sprite, 9);
    sfSprite_setTexture(rosalina_win->sprite, rosalina_win->texture, sfTrue);
    sfSprite_move(rosalina_win->sprite, (sfVector2f){430, 60});
    sfSprite_setScale(rosalina_win->sprite, (sfVector2f)
        {(float)800 / 1920 * 2, (float)450 / 1011 * 2});
}

void secret_text_init(text_t **list_text)
{
    text_t *secret_text;

    add_node_text(&list_text, 3, sfText_create(), "For you, congrats");
    secret_text = get_text_index(*list_text, 7);
    sfText_setString(secret_text->text, secret_text->string);
    sfText_setFont(secret_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(secret_text->text, (sfVector2f){55, 320});
    sfText_setCharacterSize(secret_text->text, 55);
    sfText_setColor(secret_text->text, sfWhite);
    sfText_setScale(secret_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}
