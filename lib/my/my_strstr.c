/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** ?
*/

char *my_strstr(char *str, char const *to_find)
{
    int counter = 0;

    if (str[0])
        return (0);
    while (to_find[counter]) {
        if (to_find[counter] == str[counter]) {
            counter++;
        }
        return (my_strstr(str + 1, to_find));
    }
    return (str);
}
