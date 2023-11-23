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
    sfVideoMode mode = {1920, 1080, 32};

    if (tty_error(envp) == 84)
        return 84;
    global_init(&global);
    window = sfRenderWindow_create(mode,
                                    "My Hunter",
                                    sfDefaultStyle,
                                    NULL);
    if (!window)
        return 84;
    launch_game(&global, window);
    destroy_all(global, window);
    return 0;
}
