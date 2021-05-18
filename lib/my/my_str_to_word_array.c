/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** convert a string to tab/arr (version word)
*/

#include "my.h"

int count_word(char *s)
{
    int nb_word = 0;

    for (int count = 0; s[count] != '\0'; count++) {
        if (s[count] != ' ' && s[count + 1] == ' ' || s[count + 1] == '\0' ||
            s[count] == '\t' && s[count + 1] == '\t')
            nb_word++;
    }
    return (nb_word);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char **tab = malloc(sizeof(char *) * (count_word(str) + 1));

    while (str[i] != '\0') {
        tab[count] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        j = 0;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            tab[count][j] = str[i];
            i++;
            j++;
        }
        tab[count][j] = '\0';
        count++;
    }
    tab[count] = NULL;
    return (tab);
}
