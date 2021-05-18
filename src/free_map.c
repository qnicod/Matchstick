/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** free_map
*/

#include "stick.h"

void free_map(map_t *map)
{
    for (int count = 0; map->tab[count]; count++)
        free(map->tab[count]);
    free(map->tab);
}