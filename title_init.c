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

int title_music_init(global_t *global)
{
    music_t *title_music;
    sfMusic *music = sfMusic_createFromFile
        ("sources/star_festival.ogg");

    if (music == NULL)
        return 84;
    add_node_music(&global->list_music, 0,
        music);
    title_music = get_music_index(global->list_music, 0);
    sfMusic_setLoop(title_music->music, sfTrue);
    sfMusic_setVolume(title_music->music, 50);
    sfMusic_play(title_music->music);
    return 0;
}

int background_title_init(sprite_t **list_sprite)
{
    sprite_t *background;
    sfTexture *texture = sfTexture_createFromFile
            ("sources/background.jpg", NULL);

    if (texture == NULL)
        return 84;
    add_node_sprite(&list_sprite, 0,
        sfSprite_create(), texture);
    background = get_sprite_index(*list_sprite, 0);
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_setScale(background->sprite, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
    return 0;
}

int title_text_init(text_t **list_text)
{
    text_t *title_text;
    sfFont *font = sfFont_createFromFile
            ("sources/galaxy.ttf");

    if (font == NULL)
        return 84;
    add_node_text(&list_text, 0, sfText_create(), "My Hunter");
    title_text = get_text_index(*list_text, 0);
    sfText_setString(title_text->text, title_text->string);
    sfText_setFont(title_text->text, font);
    sfText_move(title_text->text, (sfVector2f){30, 0});
    sfText_setCharacterSize(title_text->text, 200);
    sfText_setColor(title_text->text, sfWhite);
    sfText_setScale(title_text->text, (sfVector2f)
        {(float)800 / 1920, (float)450 / 1011});
    return 0;
}

int lose_life_music_init(global_t *global)
{
    music_t *llife_music;
    sfMusic *music = sfMusic_createFromFile
        ("sources/lose_life.wav");

    if (music == NULL)
        return 84;
    add_node_music(&global->list_music, 0,
        music);
    llife_music = get_music_index(global->list_music, 2);
    sfMusic_setVolume(llife_music->music, 100);
    return 0;
}

int save_luma_music_init(global_t *global)
{
    music_t *sluma_music;
    sfMusic *music = sfMusic_createFromFile
        ("sources/luma_sound.ogg");

    if (music == NULL)
        return 84;
    add_node_music(&global->list_music, 0,
        music);
    sluma_music = get_music_index(global->list_music, 3);
    sfMusic_setVolume(sluma_music->music, 100);
    return 0;
}
