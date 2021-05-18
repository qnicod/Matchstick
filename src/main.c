/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** main
*/

#include "my.h"
#include "stick.h"

static void init_map(map_t *map, char **av)
{
    map->dimensions = my_getnbr(av[1]);
    map->sticks = define_nb_sticks(map, map->dimensions);
    map->tab = generate_double(map);
}

static void init_game(game_t *game, map_t *map, char **av)
{
    game->nb_matches = my_getnbr(av[2]);
    game->nb_lines = map->dimensions;
}

static int error(int ac, char **av)
{
    int x = 0;
    int y = 0;

    if (ac != 3) {
        write(STDERR_FILENO, "Invalid number of arguments.\n", 29);
        return (84);
    }
    x = my_atoi(av[1]);
    y = my_atoi(av[2]);
    if (x < 2 || x > 99 || y < 1) {
        write(STDERR_FILENO, "Invalid lines or matches number.\n", 34);
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    map_t *map = malloc(sizeof(map_t));
    game_t *game = malloc(sizeof(game_t));

    if (error(ac, av) == 84)
        return (84);
    init_map(map, av);
    init_game(game, map, av);
    get_sticks(map);
    display_game_board(map);
    return (game_loop(map, game));
}