/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** map
*/

#include "stick.h"

void get_sticks(map_t *map)
{
    size_t x;
    size_t y;
    int count_s = 0;
    size_t lenght = ((map->dimensions) * 2);
    size_t height = (map->dimensions) + 2;

    for (x = 1; x < height - 1; x++)
        for (y = 1; y <= lenght - 1; y++)
            map->tab[x][y] = ' ';
    for (x = 1; x < height - 1; x++) {
        y = height - x - 1;
        for (count_s = 0; count_s < map->sticks[x - 1]; count_s++) {
            map->tab[x][y] = '|';
            y++;
        }
    }
}

int *define_nb_sticks(map_t *map, size_t height)
{
    size_t x = 1;
    size_t y = 0;

    map->sticks = malloc(sizeof(int) * height);
    while (y < height) {
        map->sticks[y] = x;
        x += 2;
        y++;
    }
    return (map->sticks);
}

char **generate_double(map_t *map)
{
    size_t x = 0;
    size_t y = 0;
    size_t lenght = ((map->dimensions) * 2);
    size_t height = (map->dimensions) + 2;

    map->tab = malloc(sizeof(char *) * (height + 1));
    for (x = 0; x < height; x++)
        map->tab[x] = malloc(sizeof(char) * (lenght + 1));
    for (x = 0; x < height; x++)
        for (y = 0; y <= lenght; y++)
            map->tab[x][y] = ' ';
    for (x = 0; x < height; x++) {
        map->tab[x][0] = '*';
        map->tab[x][lenght] = '*';
    }
    for (x = 0; x < lenght; x++) {
        map->tab[0][x] = '*';
        map->tab[height - 1][x] = '*';
    }
    return (map->tab);
}

void display_game_board(map_t *map)
{
    for (size_t count = 0; count < map->dimensions + 2; count++) {
        my_putstr(map->tab[count]);
        my_putchar('\n');
    }
}