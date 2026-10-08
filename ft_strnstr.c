/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:53:01 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 17:37:02 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char 	*p_big;
	size_t	little_len;

	p_big = (char *) big;
	little_len = ft_strlen(little);
	if (!*little)
		return (p_big);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (len >= little_len)
	{
		if (ft_memcmp(p_big, little, little_len) == 0)
			return (p_big);
		p_big++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s", ft_strnstr("abcdef", "f", 6));
// }
