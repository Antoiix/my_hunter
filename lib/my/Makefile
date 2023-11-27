##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## this file compiles the lib
## created and edited by Antoine Orange.
## All rights reserved
##

SRC = my_compute_power_rec.c	\
	my_compute_square_root.c	\
	my_find_prime_sup.c	\
	my_getnbr.c	\
	my_isneg.c	\
	my_is_prime.c	\
	my_putchar.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_revstr.c	\
	my_show_word_array.c	\
	my_sort_int_array.c	\
	my_strcapitalize.c	\
	my_strcat.c	\
	my_strcmp.c	\
	my_strcpy.c	\
	my_strdup.c	\
	my_str_isalpha.c	\
	my_str_islower.c	\
	my_str_isnum.c	\
	my_str_isprintable.c	\
	my_str_isupper.c	\
	my_strlen.c	\
	my_strlowcase.c	\
	my_strncat.c	\
	my_strncmp.c	\
	my_strncpy.c	\
	my_strstr.c	\
	my_str_to_word_array.c	\
	my_strupcase.c	\
	my_swap.c	\
	printf_functions/my_pf_putchar.c	\
	printf_functions/my_pf_put_nbr.c	\
	printf_functions/my_pf_putstr.c	\
	mini_printf.c	\
	my_putnbr_base.c\
	printf_functions/my_pf_put_float.c	\
	printf_functions/my_pf_putnbr_base.c	\
	my_putpointer_base_hexa.c	\
	my_put_float.c	\
	printf_functions/my_pf_put_float_pzero.c	\
	my_printf.c	\
	my_isnum.c	\
	printf_functions/flags_c_s_poucentage.c	\
	printf_functions/flags_d_i.c\
	printf_functions/flags_f.c \
	printf_functions/flags_oux.c \
	printf_functions/flags_p.c \
	printf_functions/flags_n.c 	\
	printf_functions/flags_scientific.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/my.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all
