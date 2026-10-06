/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:59:25 by alla              #+#    #+#             */
/*   Updated: 2026/10/05 22:00:11 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static	int	test_case(int c)
{
	int	res;
	int	lib_res;

	res = ft_isascii(c);
	lib_res = isascii(c);

	if ((res != 0) != (lib_res != 0))
	{
		printf(RED "FAIL: ft_isascii(%d) -> %d, expected %d\n" RESET,
				c, res, lib_res);
		return (1);
	}
	return (0);
}

void	test_isascii(void)
{
	int	failed;
	int	c;

	failed = 0;
	c = 0;
	printf("\n=== ft_isascii ===\n");
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

