/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** return if a string composed of lower case only
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 'a' || str[i] > 'z') {
            return (0);
        }
        i++;
    }
    return (1);
}
