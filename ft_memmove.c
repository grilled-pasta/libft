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
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	else
		while (n--)
			((char *) dest)[n] = ((char *) src)[n];
	return (dest);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	buffer[8] = {'1', '2', '3', '4', '5', '\0', 'b', 'c'};
// 	int		i = 0;
// 	char	res[8] = {0, [6] = buffer[0], [7] = buffer[1]};
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
//
// 	ft_memmove(res, buffer, 8);
//
// 	while (i < 8)
// 	{
// 		printf("%c\t", res[i]);
// 		i++;
// 	}
//
// 	printf("\n");
//
// 	ft_memmove(s, s + 2, 2);
// 	i = 0;
// 	while (i < 2)
// 	{
// 		printf("%c\t", s[i]);
// 		i++;
// 	}
//
// 	return (0);
// }
