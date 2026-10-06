/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:19:18 by alla              #+#    #+#             */
/*   Updated: 2026/10/05 20:19:31 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(int c)
{
	int	res;
	int	lib_res;

	res = ft_isalpha(c);
	lib_res = isalpha(c);

	if ((res != 0) != (lib_res != 0))
	{
		printf(RED "FAIL: ft_isalpha(%d) -> %d, expected %d\n" RESET,
				c, res, lib_res);
		return (1);
	}
	return (0);
}

void	test_isalpha(void)
{
	int	failed;
	int	c;

	failed = 0;
	c = 0;
	printf("\n=== ft_isalpha ===\n");
	while (c <= 127)
	{
		if (test_case(c))
			failed++;
		c++;
	}
	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}
