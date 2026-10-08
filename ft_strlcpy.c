/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:28:18 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/07 00:42:06 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (dstsize == 0)
		return (src_length);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}

#include <stdio.h>
//
// int	main(void)
// {
// 	{
// 		char	dest[] = "abcdef";
// 		char	*src = "XYZ";
// 		size_t	size = 0;
//
// 		size_t	res = ft_strlcpy(dest, src, size);
// 		printf("%zu => %s\n", res, dest);
// 	}	
// 	{
// 		char	dest[] = "abcdef";
// 		char	*src = "XYZ";
// 		size_t	size = 3;
//
// 		size_t	res = ft_strlcpy(dest, src, size);
// 		printf("%zu => %s\n", res, dest);
// 	}	
// }
