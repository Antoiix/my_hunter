/*
** EPITECH PROJECT, 2023
** title_init.c
** File description:
** this file contains all the
** necessary functions for the
** init of title ressources.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

void title_music_init(global_t *global)
{
    music_t *title_music;

    add_node_music(&global->list_music, 0,
        sfMusic_createFromFile("sources/star_festival.ogg"));
    title_music = get_music_index(global->list_music, 0);
    sfMusic_setLoop(title_music->music, sfTrue);
    sfMusic_setVolume(title_music->music, 100);
    sfMusic_play(title_music->music);
}

void background_title_init(global_t *global)
{
    sprite_t *background;

    add_node_sprite(&global->list_sprite, 0,
        sfSprite_create(), sfTexture_createFromFile
            ("sources/background.jpg", NULL));
    background = get_sprite_index(global->list_sprite, 0);
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
}

void title_text_init(global_t *global)
{
    text_t *title_text;

    add_node_text(&global->list_text, 0, sfText_create(), "My Hunter");
    title_text = get_text_index(global->list_text, 0);
    sfText_setString(title_text->text, title_text->string);
    sfText_setFont(title_text->text, sfFont_createFromFile
            ("sources/galaxy.ttf"));
    sfText_move(title_text->text, (sfVector2f){30, 0});
    sfText_setCharacterSize(title_text->text, 200);
    sfText_setColor(title_text->text, sfWhite);
}
