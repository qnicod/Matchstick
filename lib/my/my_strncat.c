/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** add a string in another string (concaténer)
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len;
    int counter;

    len = my_strlen(dest);
    counter = 0;

    while (counter < nb && src[counter]) {
        dest[len + counter] = src[counter];
        counter++;
    }
    dest[len + counter] = '\0';
    return (dest);
}
