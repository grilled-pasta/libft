/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:34:18 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 15:39:17 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	char	*res;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s_length = ft_strlen(s + start);
	if (len > s_length)
		len = s_length;
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 		char	*test = "1234567";
// 		char	*res;
//
// 		res = ft_substr(test, 3, 2);
// 		printf("__%s__\n", res);
// }
