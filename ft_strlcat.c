/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 21:07:37 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 21:52:05 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_length;

	i = 0;
	dst_length = 0;
	while (dst[dst_length] && dst_length < dstsize)
		dst_length++;
	if (dst_length > dstsize)
		dst_length = dstsize;
	while (src[i] && dst_length + i + 1 < dstsize)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dst_length + i] = '\0';
	return (dst_length + ft_strlen(src));
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	dest[10] = "Hello";
//
// 	size_t	n = ft_strlcat(dest, " World", 5);
// 	printf("%s\t%zu", dest, n);	
// }
