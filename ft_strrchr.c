/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:03:46 by alla              #+#    #+#             */
/*   Updated: 2026/10/01 23:17:00 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	s_length;

	s_length = ft_strlen(s);
	i = s_length;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("acbbccde", 'c'));
// }
