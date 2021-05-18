/*
** EPITECH PROJECT, 2021
** B-CPE-200-REN-2-1-matchstick-quentin.nicod
** File description:
** test_matchstick
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "stick.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(matchstick, wrong_args_number, .init = redirect_all_std)
{
    int result = 0;
    char *av[] = { "./matchstick" };

    result = main(1, av);
    cr_assert_eq(result, 84);
}


Test(matchstick, invalid_map_format, .init = redirect_all_std)
{
	int res = 0;
	char *args[] = { "./matchstick", "0", "0" };

	res = main(3, args);
	cr_assert_eq(res, 84);
}


Test(matchstick, arg_is_not_a_number, .init = redirect_all_std)
{
	int res = 0;
	char *args[] = { "./matchstick", "coucou", "stv" };

	res = main(3, args);
	cr_assert_eq(res, 84);
}