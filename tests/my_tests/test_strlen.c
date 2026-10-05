/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 22:04:41 by alla              #+#    #+#             */
/*   Updated: 2026/10/05 22:09:24 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(char *s)
{
	size_t	res;
	size_t	lib_res;

	res = ft_strlen(s);
	lib_res = strlen(s);

	if (res != lib_res)
	{
		printf(RED "FAIL: ft_strlen(%s) -> %ld, expected %ld\n RESET",
				s, res, lib_res);
		return (1);
	}
	return (0);
}

/*
 * undefined - NULL, not NULL-terminated string
 */
void	test_strlen(void)
{
	int		failed;
	char	tests[][6] = {
		"", 
		"abc",
		{'a', 'b', 'c', '\0', 'd', '\0'}
	};
	int		i;

	failed = 0;
	i = 0;
	printf("\n=== ft_strlen ===\n");
	while (i < 3)
	{
		if (test_case(tests[i]))
			failed++;
		i++;
	}
	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}
