/*
** EPITECH PROJECT, 2020
** my_countline.c
** File description:
** return the numbers of lines in tab
*/

int my_countline(char *str)
{
    int nb_line = 0;
    int count = 0;

    for (count = 0; str[count] != '\0'; count++)
        if (str[count] == '\n')
            nb_line++;
    return (nb_line);
}
