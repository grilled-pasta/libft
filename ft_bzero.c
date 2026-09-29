/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:54:48 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 16:02:32 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = '\0';
	}
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	buffer[8] = {'1', '2', '3', '4', '5', '\0', 'b', 'c'};
// 	int		i = 0;
//
// 	bzero(buffer, 5);
//
// 	while (i < 8)
// 	{
// 		if (buffer[i])
// 			printf("%c\t", buffer[i]);
// 		else
// 			printf("\\0\t");
// 		i++;
// 	}
// 	return (0);
// }
