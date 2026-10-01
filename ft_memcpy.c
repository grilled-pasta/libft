/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:14:41 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/30 14:18:53 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		((char *) dest)[i] = ((char *) src)[i];

	return (dest);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	buffer[8] = {'1', '2', '3', '4', '5', '\0', 'b', 'c'};
// 	int		i = 0;
// 	char	res[8] = {0};	
//
// 	ft_memcpy(res, buffer, 5);
//
// 	while (i < 8)
// 	{
// 		printf("%c\t", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
