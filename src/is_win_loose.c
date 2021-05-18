/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** is_win_loose
*/

#include "stick.h"

static size_t count_matches(map_t *map, game_t *game)
{
    int res = 0;

    for (int count = 0; count < game->nb_lines; count++)
        res += map->sticks[count];
    return (res);
}

size_t is_win_or_loose(int who_is, map_t *map, game_t *game)
{
    int count = count_matches(map, game);

    if (count == 0) {
        if (who_is == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        }
        else if (who_is == 1) {
            my_putstr("I lost... snif...  but I'll get you next time!!\n");
            return (1);
        }
    }
    return (0);
}