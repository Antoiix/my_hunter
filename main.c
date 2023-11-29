/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** this file contains the
** main function.
** created by Antoine Orange
** All rights reserved
*/

#include "my.h"
#include "list.h"

int main(int ac, char **av, char **envp)
{
    global_t global;
    sfRenderWindow *window;
    sfVideoMode mode = {800, 450, 32};
    sfImage *icon = sfImage_createFromFile("sources/icon.jpg");
    player_t player_stats = {3, 0};

    srand((time(0)));
    if (tty_error(envp) == 84)
        return 84;
    global_init(&global, &player_stats);
    window = sfRenderWindow_create(mode, "My Hunter",
        sfDefaultStyle, NULL);
    if (!window)
        return 84;
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setIcon(window, 512, 512, sfImage_getPixelsPtr(icon));
    launch_game(&global, window);
    destroy_all(global, window, icon);
    return 0;
}
