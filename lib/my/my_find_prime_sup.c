/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** find the next prime nb
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb % 2 == 0 && nb > 2)
        nb++;
    while (!my_is_prime(nb))
        nb++;
    return (nb);
}
