/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:43:57 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/30 14:27:09 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((char *) dest)[n] = ((char *) src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	buffer[8] = {'1', '2', '3', '4', '5', '\0', 'b', 'c'};
// 	int		i = 0;
// 	char	res[8] = {0, [6] = buffer[0], [7] = buffer[1]};
//
// 	ft_memmove(res, buffer, 8);
//
// 	while (i < 8)
// 	{
// 		printf("%c\t", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
