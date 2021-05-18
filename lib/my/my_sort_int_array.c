/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** range in the order, numbers in a array
*/

void my_sort_int_array(int *tab, int size)
{
    int tmp = 0;

    for (int i = 0; i != size; i++) {
        if (i > 0 && tab[i] < tab[i - 1]) {
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
            i = 0;
        }
    }
}