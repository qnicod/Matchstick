/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** ?
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 0 || str[i] <= 31 || str[i] == 127) {
            return (1);
        }
        i++;
    }
    return (0);
}
