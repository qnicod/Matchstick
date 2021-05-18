/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** returns a upper alphabetical string only
*/

int my_str_isupper(char const *str)
{
    int count = 0;

    while (str[count]) {
        if ((str[count] < 'A') && (str[count] > 'Z')) {
            return (0);
        }
        count++;
    }
    return (1);
}
