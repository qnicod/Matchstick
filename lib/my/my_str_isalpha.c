/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** return a string composed alphabetical letters
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
        if (!(str[i] >= 65 && str[i] <= 90)) {
            return (0);
        } else if (!str[i] >= 97 && str[i] <= 122)
            return (0);
    }
    return (1);
}
