/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** change every up letter in lower letter
*/

char *my_strlowcase(char *str)
{
    int counter = 0;

    while (str[counter]){
        if (str[counter] >= 'A' && str[counter] <= 'Z') {
            str[counter] += 32;
        }
        counter += 1;
    }
    return (str);
}
