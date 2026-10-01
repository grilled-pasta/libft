/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:21:58 by alla              #+#    #+#             */
/*   Updated: 2026/10/01 23:51:00 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((void *)&((unsigned char *) s)[i]);
		i++;
	}
	return (NULL);
}
//
// #include <stdio.h>
// int	main(void)
// {
// 	char	buffer[5] = {'A', 'B', '\0', 'C', 'D'};
// 	char	*res = ft_memchr(buffer, '\0', 5);
// 	printf("%c\n", res[0]);
// }
