/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:05:59 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 18:17:51 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_length;
	char	*res;
	int		i;

	i = 0;
	s_length = ft_strlen(s);
	res = (char *) malloc(s_length + 1);
	if (!res)
		return (NULL);
	while (i < s_length)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
//
// char	inc(unsigned int i, char c)
// {
// 	return (c + 1);
// }
//
// int	main(void)
// {
// 	char	*test = "abcdef";
//
// 	printf("%s", ft_strmapi(test, inc));
// }
