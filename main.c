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

void window_setup(sfRenderWindow *window, sfImage *icon)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setIcon(window, 512, 512, sfImage_getPixelsPtr(icon));
}

void help_text(int a)
{
    if (a == 1)
        my_printf("My Hunter\n\nClick on the lumas to save them.\n"
            "Try to reach 100 points ;)\n\nControls :\n"
            "Click to save lumas\nESC to exit\n");
}

int help(int ac, char **av, int a)
{
    if (ac > 2)
        return 84;
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            help_text(a);
            return 1;
        } else
            return 84;
    }
    return 0;
}

int main(int ac, char **av, char **envp)
{
    global_t global;
    sfRenderWindow *window;
    sfVideoMode mode = {800, 450, 32};
    sfImage *icon = sfImage_createFromFile("sources/icon.jpg");
    player_t player_stats = {3, 0};

    srand((time(0)));
    if (tty_error(envp) == 84 || help(ac, av, 1) == 84)
        return 84;
    if (help(ac, av, 0) == 1)
        return 0;
    window = sfRenderWindow_create(mode, "My Hunter",
        sfDefaultStyle, NULL);
    if (global_init(&global, &player_stats, icon) == 84 || !window)
        return 84;
    window_setup(window, icon);
    if (launch_game(&global, window) == 84)
        return 84;
    destroy_all(global, window, icon);
    return 0;
}
