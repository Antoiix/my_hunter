/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** this file contains all of
** prototypes.
** created and edited by Antoine Orange.
** All rights reserved
*/

#ifndef LIST_H
    #define LIST_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>

typedef struct list_sprite {
    int scene;
    sfSprite *sprite;
    sfTexture *texture;
    struct list_sprite *next;
} sprite_t;
typedef struct list_text {
    int scene;
    sfText *text;
    char *string;
    sfFont *font;
    int size;
    sfColor color;
    struct list_text *next;
} text_t;
typedef struct list_music {
    int scene;
    sfMusic *music;
    sfBool loop;
    float volume;
    struct list_music *next;
} music_t;
typedef struct list_luma {
    int scene;
    sfSprite *luma;
    sfTexture *texture;
    struct list_sprite *next;
} luma_t;
typedef struct global {
    sprite_t *list_sprite;
    text_t *list_text;
    music_t *list_music;
    luma_t *list_luma;
} global_t;
void add_node_music(music_t **list, int scene, sfMusic *music);
music_t *get_music_index(music_t *list, int index);
void piano_music_def(music_t *list);
void add_node_sprite(sprite_t **list, int scene, sfSprite *sprite,
    sfTexture *texture);
sprite_t *get_sprite_index(sprite_t *list, int index);
void add_node_text(text_t **list, int scene, sfText *text,
    char *string);
text_t *get_text_index(text_t *list, int index);
int is_scene_sprite(global_t *global, int index, int scene);
int is_scene_text(global_t *global, int index, int scene);
int is_scene_music(global_t *global, int index, int scene);
void global_init(global_t *global);
int tty_error(char **envp);
void launch_game(global_t *global, sfRenderWindow *window);
void draw_objects(global_t *global, sfRenderWindow *window, int actual_scene);
void clock_luma_anim(sfIntRect *rect, sfClock *clock, sfTime time,
    float seconds);
void clock_luma_move(sfSprite *sprite, sfClock *clock, sfTime time,
    float seconds);
void manage_mouse_click(sfMouseButtonEvent event);
void title_music_init(global_t *global);
void title_init(global_t *global);
void destroy_all(global_t global, sfRenderWindow *window);
void background_title_init(global_t *global);
void title_text_init(global_t *global);
void game_music_init(global_t *global);
void game_init(global_t *global);

#endif //LIST_H
