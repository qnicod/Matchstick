##
## EPITECH PROJECT, 2019
## Makefile 
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/map.c	\
		src/my_getline_matches.c	\
		src/player.c	\
		src/game_loop.c	\
		src/ai_move.c	\
		src/check_game.c	\
		src/is_win_loose.c	\
		src/free_map.c	\

SRC_TESTS = test/test_matchstick.c	\

OBJ	=	$(SRC:.c=.o)

DFLAGS	=	-L./lib/my -lmy

CFLAGS	=	-W -Wall -Wextra -I include/ -g

COVFLAG += --coverage

CNCURSES =	-lm

CSFML 	= 	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

NAME	=	matchstick

NAME_TEST	=	unit_tests

all:		lib $(NAME)

lib:
		make -C lib/my/

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(DFLAGS) $(CNCURSES) $(CSFML)

clean:
		rm -f $(OBJ)
		rm -f *.gcda
		rm -f *.gcno

fclean:		clean
		rm -f $(NAME)
		rm -f src/*.c~
		rm -f vgcore.*
		make fclean -C lib/my/
		rm -rf *.gcno *.gcda
		rm -f src/*.gcno src/*.gcda
		rm -f $(NAME_TEST)

re:		clean fclean all

.PHONY:	all lib clean fclean re

run_tests:
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TESTS) $(DFLAGS) $(CFLAGS) $(COVFLAG) -lcriterion