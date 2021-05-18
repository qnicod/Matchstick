/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** returns a string is composed digits
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    while (str[count]) {
        ++count;
        if (str[count] < '0' || str[count] > '9')
            return (0);
        else
            count += 1;
    }
    return (1);
}
