/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** change every low letters in up letters
*/

char *my_strupcase(char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] >= 'a' && str[counter] <= 'z') {
            str[counter] -= 32;
        }
        counter += 1;
    }
    return (str);
}
