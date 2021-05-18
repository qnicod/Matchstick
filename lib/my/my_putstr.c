/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** display chars of string
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}