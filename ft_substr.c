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

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	s_length;
	char	*res;

	s_length = ft_strlen(s);
	res = (char *) malloc(len + 1);
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
