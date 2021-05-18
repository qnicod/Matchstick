/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** compute numbers at the power with rec
*/

int my_compute_power_rec(int nb, int power)
{
    int power_rec = 0;
    int new_p = power - 1;

    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    power_rec = my_compute_power_rec(nb, new_p);
    return (nb * power_rec);
}
