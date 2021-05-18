/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** game_loop
*/

#include "stick.h"

static void refresh(map_t *map)
{
    get_sticks(map);
    display_game_board(map);
}

size_t game_loop(map_t *map, game_t *game)
{
    player_t *loop;

    while (1) {
        loop = is_player(game, map->sticks);
        if (loop == NULL)
            break;
        map->sticks[loop->line - 1] -= loop->match;
        refresh(map);
        if (is_win_or_loose(0, map, game) == 2)
            return (2);
        ai_move(game, map->sticks);
        refresh(map);
        if (is_win_or_loose(1, map, game) == 1)
            return (1);
    }
    free_map(map);
    return (0);
}