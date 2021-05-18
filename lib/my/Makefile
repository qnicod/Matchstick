##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## A Makefile, read by make command, execute all commands and rules in the Makefile
##

SRC     =       my_compute_power_rec.c \
				my_compute_square_root.c \
				my_find_prime_sup.c    \
		my_getnbr.c    \
		my_isneg.c    \
		my_is_prime.c    \
		my_putchar.c    \
		my_put_nbr.c    \
		my_putstr.c    \
		my_revstr.c    \
		my_showmem.c    \
		my_showstr.c    \
		my_sort_int_array.c    \
		my_strcat.c    \
		my_strcmp.c    \
		my_strcpy.c    \
		my_str_isalpha.c    \
		my_str_islower.c    \
		my_str_isnum.c    \
		my_str_isprintable.c    \
		my_str_isupper.c    \
		my_strlen.c    \
		my_strlowcase.c    \
		my_strncat.c    \
		my_strncmp.c    \
		my_strncpy.c    \
		my_strupcase.c    \
		my_swap.c    \
		my_strstr.c	\
		my_countline.c	\
		my_str_to_line_array.c	\
		my_str_to_word_array.c	\
		my_atoi.c	\

OBJ	 = 	$(SRC:.c=.o)

NAME	 = 	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
