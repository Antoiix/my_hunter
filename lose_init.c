/*
** EPITECH PROJECT, 2023
** lose_init.c
** File description:
** this file contains all the
** necessary functions for
** init lose screen.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void background_lose_init(sprite_t **list_sprite)
{
    sprite_t *background_lose;

    add_node_sprite(&list_sprite, 2,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/lose_wallpaper.jpeg", NULL));
    background_lose = get_sprite_index(*list_sprite, 7);
    sfSprite_setTexture(background_lose->sprite,
        background_lose->texture, sfTrue);
    sfSprite_setScale(background_lose->sprite, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void lose_text_init(text_t **list_text)
{
    text_t *lose_text;

    add_node_text(&list_text, 2, sfText_create(),
        "You saved\t\tlumas but some of them\n\t\t\t\t\tare still prisoners");
    lose_text = get_text_index(*list_text, 3);
    sfText_setString(lose_text->text, lose_text->string);
    sfText_setFont(lose_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(lose_text->text, (sfVector2f){40, 0});
    sfText_setCharacterSize(lose_text->text, 65);
    sfText_setColor(lose_text->text, sfWhite);
    sfText_setScale(lose_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void esc_text_init(text_t **list_text)
{
    text_t *esc_text;

    add_node_text(&list_text, 2, sfText_create(), "ESC to quit");
    esc_text = get_text_index(*list_text, 4);
    sfText_setString(esc_text->text, esc_text->string);
    sfText_setFont(esc_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(esc_text->text, (sfVector2f){640, 420});
    sfText_setCharacterSize(esc_text->text, 45);
    sfText_setColor(esc_text->text, sfWhite);
    sfText_setScale(esc_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void lose_nb_init(text_t **list_text)
{
    text_t *title_text;

    add_node_text(&list_text, 2, sfText_create(), "0");
    title_text = get_text_index(*list_text, 5);
    sfText_setString(title_text->text, title_text->string);
    sfText_setFont(title_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(title_text->text, (sfVector2f){260, 1});
    sfText_setCharacterSize(title_text->text, 62);
    sfText_setColor(title_text->text, sfWhite);
    sfText_setScale(title_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
}

void lose_music_init(global_t *global)
{
    music_t *game_music;

    add_node_music(&global->list_music, 2,
        sfMusic_createFromFile("sources/good_egg.ogg"));
    game_music = get_music_index(global->list_music, 4);
    sfMusic_setLoop(game_music->music, sfTrue);
    sfMusic_setVolume(game_music->music, 60);
}
