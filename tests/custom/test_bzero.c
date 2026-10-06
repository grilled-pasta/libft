/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:34:24 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/06 22:49:05 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(void *s, size_t n)
{
	void	*res;
	void	*lib_res;

	res = strdup((char *) s);
	lib_res = strdup((char *) s);
	ft_bzero(res, n);
	bzero(lib_res, n);

	if (memcmp(res, lib_res, n) != 0)
	{
		printf(RED "FAIL: ft_bzero(%s) -> %s, expected %s\n" RESET,
				(char *) s, (char *) res, (char *) lib_res);
		return (1);
	}
	return (0);
}


void	test_bzero(void)
{
	int		failed;
	char	test[6] = {'a', 'b', 'c', '\0', 'd', '\0'};

	failed = 0;
	printf("\n=== ft_bzero ===\n");
	if (test_case("abcdefg", 4))
		failed++;
	if (test_case("abcd", 1))
		failed++;
	if (test_case(test, 6))
		failed++;

	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}

