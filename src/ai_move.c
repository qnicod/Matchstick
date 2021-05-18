/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** ai_move
*/

#include "stick.h"

static void display_ai_move(int x, int y)
{
    my_putstr("AI removed ");
    my_put_nbr(x);
    my_putstr(" match(es) from line ");
    my_put_nbr(y + 1);
    my_putchar('\n');
}

void ai_move(game_t *game, int *sticks)
{
    long int x = 0;
    long int y = 0;

    srandom(time(NULL));
    my_putstr("\nAI's turn...\n");
    while (1) {
        x = random() % game->nb_matches;
        y = random() % game->nb_lines;
        if (sticks[y] >= x && x > 0)
            break;
    }
    sticks[y] -= x;
    display_ai_move(x, y);
}