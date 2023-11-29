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
    sfClock *clock_anim;
    sfIntRect rect;
    sfVector2f vector;
    struct list_luma *next;
} luma_t;
typedef struct player_stats {
    int nb_lives;
    int score;
    char str_score[];
} player_t;
typedef struct global {
    sprite_t *list_sprite;
    text_t *list_text;
    music_t *list_music;
    luma_t *list_luma;
    player_t *player;
} global_t;
void add_node_music(music_t **list, int scene, sfMusic *music);
music_t *get_music_index(music_t *list, int index);
void piano_music_def(music_t *list);
void add_node_sprite(sprite_t ***list, int scene, sfSprite *sprite,
    sfTexture *texture);
sprite_t *get_sprite_index(sprite_t *list, int index);
void add_node_text(text_t ***list, int scene, sfText *text,
    char *string);
text_t *get_text_index(text_t *list, int index);
int is_scene_sprite(global_t *global, int index, int scene);
int is_scene_text(global_t *global, int index, int scene);
int is_scene_music(global_t *global, int index, int scene);
void global_init(global_t *global, player_t *player_stats);
int tty_error(char **envp);
void launch_game(global_t *global, sfRenderWindow *window);
void draw_objects(global_t *global, sfRenderWindow *window, int actual_scene);
void clock_luma_anim(sfIntRect *rect, sfClock *clock, sfTime time);
void manage_mouse_click(sfMouseButtonEvent event, global_t *global,
    int *current_scene, sfRenderWindow *window);
void title_music_init(global_t *global);
void title_init(global_t *global);
void destroy_all(global_t global, sfRenderWindow *window, sfImage *image);
void background_title_init(sprite_t **list_sprite);
void title_text_init(text_t **list_text);
void game_music_init(global_t *global);
void game_init(global_t *global);
void background_game_init(sprite_t **list_sprite);
void add_node_luma(luma_t **list, int scene, sfSprite *luma,
    sfTexture *texture);
luma_t *get_luma_index(luma_t *list, int index);
void luma_create(global_t *global);
int is_scene_luma(global_t *global, int index, int scene);
void all_lumas_move_left(sfTime time, int *current_scene,
    global_t *global);
void clock_luma_spawn(sfClock *clock, global_t *global,
    sfTime time);
void score_text_init(text_t **list_text);
void score_text_number_init(text_t **list_text, player_t *player_stats);
void resize(global_t *global, sfRenderWindow *window, int *actual_scene);
void cursor_sprite_init(sprite_t **list_sprite);
void keyboard_inputs(sfRenderWindow *window);
void mouse_follow(sfRenderWindow *window, global_t *global);
void start_button_init(sprite_t **list_sprite);
void button_init(global_t *global);
void title_button_events(sfMouseButtonEvent event, global_t *global,
    int *current_scene, sfRenderWindow *window);
void fheart_init(sprite_t **list_sprite);
void sheart_init(sprite_t **list_sprite);
void theart_init(sprite_t **list_sprite);
void lose_life_music_init(global_t *global);
void save_luma_music_init(global_t *global);
void background_lose_init(sprite_t **list_sprite);
void lose_text_init(text_t **list_text);
void esc_text_init(text_t **list_text);
void lose_nb_init(text_t **list_text);
void lose_music_init(global_t *global);
void background_win_init(sprite_t **list_sprite);
void win_music_init(global_t *global);
void twoesc_text_init(text_t **list_text);
typedef struct rosalina {
    sfClock *clock;
    sfIntRect rect;
}rosalina_t;
void rosalina_anim(sprite_t **list_sprite, rosalina_t *rosalina,
    sfTime time, int *current_scene);
void rosalina_win_init(sprite_t **list_sprite);
void secret_text_init(text_t **list_text);
void all_inits(global_t *global);

#endif //LIST_H
