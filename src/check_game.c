/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** check_match_lines
*/

#include "stick.h"

size_t matches_check(game_t *game, player_t *user, int *sticks)
{
    if (user->match < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    } else if (user->match == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    }
    if (game->nb_matches < user->match) {
        my_putstr("Error: you cannot move more than ");
        my_put_nbr(game->nb_matches);
        my_putstr(" matches per turn\n");
        return (84);
    } else if (sticks[user->line - 1] - user->match < 0) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    } else
        return (0);
}

size_t lines_check(game_t *game, player_t *user)
{
    if (user->line > game->nb_lines) {
        my_putstr("Error: this line is out of range\n");
        return (84);
    } else if (user->line < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    } else if (user->line == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    } else
        return (0);
}