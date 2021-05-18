/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swaps the content of two integers
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *b;
    *b = *a;
    *a = c;
}
