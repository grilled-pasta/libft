/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:20:43 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/02 21:29:39 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	count_s(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (size);
}

static void	free_arr(char **s, int size)
{
	while (size > 0)
	{
		size--;
		free(s[size]);
	}
	free(s);
}

static	char	*gen_substr(char const **s, char c)
{
	char	*res;
	int		size;

	size = 0;
	while ((*s)[size] && (*s)[size] != c)
		size++;
	res = (char *) malloc(size + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, *s, size + 1);
	*s += size;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		size;

	size = count_s(s, c);
	res = (char **) malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		res[i] = gen_substr(&s, c);
		if (!res[i])
		{
			free_arr(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

// #include <stdio.h>
//
// void	test(char *s, char c)
// {
// 	char	**res;
// 	int		i;
//
// 	i = 0;
// 	res = ft_split(s, c);
// 	while (res[i])
// 	{
// 		printf("[%s],", res[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (res[i])
// 	{
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// }
//
// int	main(void)
// {
// 	test("a,b,c,d,e,f,", ',');
// 	test(",a,b,c", ',');
// 	test("a,b,c,", ',');
// 	test(",a,b,c,", ',');
// 	test("a,,b,,c", ',');
// 	test(",,,", ',');
// 	test("", ',');
// 	test("abc", ',');
// 	test("abc", 'x');
// }
