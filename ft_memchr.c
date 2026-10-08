/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:21:58 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 23:51:00 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char) c)
			return ((void *) p);
		p++;
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
