/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** player
*/

#include "stick.h"

static void player_move(player_t *loop)
{
    my_putstr("Player removed ");
    my_put_nbr(loop->match);
    my_putstr(" match(es) from line ");
    my_put_nbr(loop->line);
    my_putstr("\n");
}

player_t *is_player(game_t *game, int *matches)
{
    player_t *user = malloc(sizeof(player_t));

    my_putstr("\nYour turn:\n");
    do {
        do {
            my_putstr("Line: ");
            user->line = my_getline_matches();
            if (user->line == -1)
                return (NULL);
        } while (lines_check(game, user) != 0);
            my_putstr("Matches: ");
            user->match = my_getline_matches();
            if (user->match == -1)
                return (NULL);
    } while (matches_check(game, user, matches) != 0);
    player_move(user);
    return (user);
}