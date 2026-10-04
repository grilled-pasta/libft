/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:20:43 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 17:31:09 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int	w_count;

	w_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			w_count++;
		while (*s && *s != c)
			s++;
	}
	return (w_count);
}

static	int	next_word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static	void	free_str_array(char **arr, int size)
{
	while (size-- > 0)
		free(arr[size]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count_w;
	int		i;

	count_w = count_words(s, c);
	res = (char **) malloc((count_w + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		res[i] = (char *) malloc((next_word_length(s, c) + 1) * sizeof(char));
		if (!res[i])
			return (free_str_array(res, i), NULL);
		ft_strlcpy(res[i], s, next_word_length(s, c) + 1);
		while (*s && *s != c)
			s++;
		i++;
	}
	res[count_w] = NULL;
	return (res);
}
// #include <unistd.h>
//
// void	ft_print_result(char const *s)
// {
// 	int		len;
// 	char	tab;
//
// 	len = 0;
// 	tab = '\t';
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// 	write(1, &tab, 1);
// }
//
// int	main(void)
// {
// 	char	**res;
// 	int		i;
//
// 	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit.
// 	Sed non risus. Suspendisse", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		ft_print_result(res[i]);
// 		i++;
// 	}
//
// }
