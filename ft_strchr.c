/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:15:15 by alla              #+#    #+#             */
/*   Updated: 2026/10/01 22:22:18 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s", ft_strchr("abcd", '\0'));
// }
