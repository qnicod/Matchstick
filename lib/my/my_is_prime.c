/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** returns if a given number is a prime one
*/

int my_is_prime(int nb)
{
    int modulo = 2;

    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    while (nb % modulo > 0) {
        modulo++;
        if (modulo == nb)
            return (1);
    }
    return (0);
}
