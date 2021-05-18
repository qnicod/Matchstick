/*
** EPITECH PROJECT, 2020
** my_str_to_line_array.c
** File description:
** convert a string to tab/arr (version line)
*/

#include "my.h"

int my_spec_strlen(char *str, int nb)
{
    int count = 1;

    while (str[nb + count] != '\0' && str[nb + count] != '\n')
        count++;
    return (count);
}

char **my_str_to_line_array(char *str, int nb_line)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char **tab = malloc(sizeof(char *) * (nb_line + 1));

    while (count < nb_line) {
        j = 0;
        tab[count] = malloc(sizeof(char) * (my_spec_strlen(str, i) + 1));
        while (str[i] != '\0' && str[i] != '\n') {
            tab[count][j] = str[i];
            j++;
            i++;
        }
        i++;
        tab[count][j] = '\0';
        count++;
    }
    tab[count] = NULL;
    return (tab);
}