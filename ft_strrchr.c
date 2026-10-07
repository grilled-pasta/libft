/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:03:46 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 17:37:11 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
			last = s;
		s++;
	}
	if ((unsigned char) c == '\0')
		last = s;
	return ((char *) last);
}

//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("acbbccde", 'c'));
// }
