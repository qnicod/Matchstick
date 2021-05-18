/*
** EPITECH PROJECT, 2020
** my strncpy.c
** File description:
**  copy a characters's chain intput a other characters chains with n characters
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int counter = 0;
    int len = 0;

    while (src[len])
        len++;
    while (src[counter] && counter < n) {
        dest[counter] = src [counter];
        counter++;
    }
    if (n > len)
        dest[counter] = '\0';
    return (dest);
}
