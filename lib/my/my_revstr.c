/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** return characters intput a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char toto;
    int counter = 0;
    int len = my_strlen(str) - 1;

    while (counter < len) {
        toto = str[len];
        str[len] = str[counter];
        str[counter] = toto;
        counter++;
        len--;
    }
    return (str);
}
