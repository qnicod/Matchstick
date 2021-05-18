/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char *str)
{
    int i;
    int result;

    result = 0;
    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while ((str[i] >= '0') && (str[i] <= '9')) {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    if (str[0] == '-')
        result = result * (-1);
    return (result);
}