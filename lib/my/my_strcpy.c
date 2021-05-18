/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
**  copy a characters's chain intput a other characters chains
*/

char *my_strcpy(char *dest, char const *src)
{
    int j = 0;
    while (src[j] != '\0') {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}
