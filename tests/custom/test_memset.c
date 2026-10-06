/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:26:55 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/06 22:30:53 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(char *s, int c, size_t n)
{
	char	*s1;
	char	*s2;
	void	*res;
	void	*lib_res;

	s1 = strdup(s);
	s2 = strdup(s);
	res = ft_memset(s1, c, n);
	lib_res = memset(s2, c, n);

	if (memcmp(res, lib_res, n) != 0)
	{
		printf(RED "FAIL: ft_memset(%s) -> %s, expected %s\n" RESET,
				(char *) s, (char *) res, (char *) lib_res);
		return (1);
	}
	return (0);
}


void	test_memset(void)
{
	int		failed;
	char	test[6] = {'a', 'b', 'c', '\0', 'd', '\0'};

	failed = 0;
	printf("\n=== ft_memset ===\n");
	if (test_case("abcdefg", 67, 4))
		failed++;
	if (test_case("abcd", 67, 1))
		failed++;
	if (test_case(test, 67, 4))
		failed++;

	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}

