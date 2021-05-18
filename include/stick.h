/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** stick
*/

#ifndef STICK_H_
#define STICK_H_

#define MAX_GETLINE 255

#include "my.h"
#include <stdbool.h>
#include <time.h>

typedef struct map_s {
    char **tab;
    int *sticks;
    size_t dimensions;
} map_t;

typedef struct game_s {
    int nb_lines;
    int nb_matches;
} game_t;

typedef struct player_s {
    int match;
    int line;
} player_t;

char **generate_double(map_t *map);
int *define_nb_sticks(map_t *map, size_t height);
void get_sticks(map_t *map);
void display_game_board(map_t *map);
player_t *is_player(game_t *game, int *matches);
int my_getline_matches(void);
size_t game_loop(map_t *map, game_t *game);
void ai_move(game_t * game, int *sticks);
size_t matches_check(game_t *game, player_t *user, int *sticks);
size_t lines_check(game_t *game, player_t *user);
size_t is_win_or_loose(int who_is, map_t *map, game_t *game);
void free_map(map_t *map);
int main(int ac, char **av);
#endif /* !STICK_H_ */