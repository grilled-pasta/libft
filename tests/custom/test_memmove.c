/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 00:05:52 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/07 00:22:46 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// TODO: print_bytes for testing
//
static	int	test_overlap_reverse(void)
{
	unsigned char	res[20];
	unsigned char	lib_res[20];
	size_t			i;

	i = 0;
	while (i < 20)
	{
		res[i] = 'A' + i;
		lib_res[i] = 'A' + i;
		i++;
	}	
	ft_memmove(res + 2, res, 10);
	memmove(lib_res + 2, lib_res, 10);
	if (memcmp(res, lib_res, 20) != 0)
	{
		printf(RED "FAIL: test_overlap_reverse\n" RESET);	
		return (1);
	}
	return (0);
}

static	int	test_overlap(void)
{
	unsigned char	res[20];
	unsigned char	lib_res[20];
	size_t			i;

	i = 0;
	while (i < 20)
	{
		res[i] = 'A' + i;
		lib_res[i] = 'A' + i;
		i++;
	}	
	ft_memmove(res, res + 2, 10);
	memmove(lib_res, lib_res + 2, 10);
	if (memcmp(res, lib_res, 20) != 0)
	{
		printf(RED "FAIL: test_overlap\n" RESET);
		return (1);
	}
	return (0);
}

static	int	test_case(void *dest, void *src, size_t n)
{
	void	*res;
	void	*lib_res;

	res = (void *) malloc(n * sizeof(void *));
	strcpy(res, dest);
	lib_res = (void *) malloc(n * sizeof(void *));
	strcpy(lib_res, dest);
	ft_memmove(res, src, n);
	memmove(lib_res, src, n);

	if (memcmp(res, lib_res, n) != 0)
	{
		printf(RED "FAIL: ft_memmove(%s, %s, %ld) -> %s, expected %s\n" RESET,
				(char *) dest, (char *) src, n, (char *) res, (char *) lib_res);
		return (1);
	}
	free(res);
	free(lib_res);
	return (0);
}

void	test_memmove(void)
{
	int		failed;

	failed = 0;
	printf("\n=== ft_memmove ===\n");
	if (test_case("abcdefg", "xxxx", 4))
		failed++;
	if (test_case("abcd", "xxxx", 0))
		failed++;
	if (test_overlap())
		failed++;
	if (test_overlap_reverse())
		failed++;
	if (failed == 0)
		printf(GREEN "PASS: all tests passed\n" RESET);
	else
		printf(RED "FAIL: %d test(s) failed\n" RESET, failed);
}
