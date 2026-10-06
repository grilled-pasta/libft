/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 23:11:52 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/06 23:46:32 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(void *dest, void *src, size_t n)
{
	void	*res;
	void	*lib_res;

	res = (void *) malloc(n * sizeof(void *));
	strcpy(res, dest);
	lib_res = (void *) malloc(n * sizeof(void *));
	strcpy(lib_res, dest);
	ft_memcpy(res, src, n);
	memcpy(lib_res, src, n);

	if (memcmp(res, lib_res, n) != 0)
	{
		printf(RED "FAIL: ft_memcpy(%s, %s, %ld) -> %s, expected %s\n" RESET,
				(char *) dest, (char *) src, n, (char *) res, (char *) lib_res);
		return (1);
	}
	free(res);
	free(lib_res);
	return (0);
}

void	test_memcpy(void)
{
	int		failed;
	char	test[6] = {'a', '\0', 'c', '\0', 'd'};
	char	test2[3] = {'\0', 'x', 'x'};

	failed = 0;
	printf("\n=== ft_memcpy ===\n");
	if (test_case("abcdefg", "xxxx", 4))
		failed++;
	if (test_case("abcd", "xxxx", 1))
		failed++;
	if (test_case(test, test2, 3))
		failed++;

	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}
