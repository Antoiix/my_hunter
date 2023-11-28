##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## abc
##

SRC = music_list.c	\
	sprite_list.c	\
	text_list.c	\
	luma_list.c	\
	scene_check.c	\
	init.c	\
	main.c	\
	error_handling.c	\
	title.c	\
	luma_anim_left.c	\
	mouse_click.c	\
	title_init.c	\
	draw.c	\
	game_init.c	\
	luma_create.c	\
	resize.c	\
	title_buttons.c

OBJ = $(SRC:.c=.o)

NAME = my_hunter

CFLAGS = -Wall -Wextra -I./SFML/Graphics -I./SFML/Window	\
	-I./SFML/Config -I./SFML/Audio -I./SFML/System -I./include

all: $(NAME)

$(NAME): libr $(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window	\
		-lcsfml-audio -lcsfml-system -lmy -Llib/my

libr:
	make -C lib/my

run: all clean
	./$(NAME)
	rm lib/my/libmy.a
	rm -f $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re: clean fclean all
	make re -C lib/my
