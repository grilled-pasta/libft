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
	char			*res;
	unsigned int	i;

	res = (char *) malloc(ft_strlen(s) + 1);
	i = 0;
	if (!res)
		return (NULL);
	while (*(s + i))
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	*(res + i) = '\0';
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
