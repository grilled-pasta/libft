/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:44:56 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 14:46:23 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
//
// int main()
// {
// 	char	buffer[10];
// 	int		i = 0;
// 	char	*res = ft_memset(buffer, 69, sizeof(buffer));
//
// 	while (i < 10)
// 	{
// 		printf("%c\t", ((unsigned char *) res)[i]);
// 		i++;
// 	}
// }
