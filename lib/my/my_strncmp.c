/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** compare 2 str with a limit n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (!s1[i] && !s2[i] || i == n)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
