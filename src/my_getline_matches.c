/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** my_getline_matches
*/

#include "stick.h"

int my_getline_matches(void)
{
    size_t len = 0;
    int val = 0;
    char *str = NULL;
    ssize_t read_line = getline(&str, &len, stdin);

    if (read_line == -1)
        return (-1);
    val = my_atoi(str);
    if (str)
        free(str);
    return (val);
}