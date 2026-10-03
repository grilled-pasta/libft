/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:15:15 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 23:16:50 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&s[i]);
		i++;
	}
	if ((char) c == '\0')
		return (&s[i]);
	return (NULL);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s", ft_strchr("abcd", '\0'));
// }
