/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:40:53 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 15:47:26 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_length;
	size_t	s2_length;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	res = (char *) malloc(s1_length + s2_length + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, s1_length + 1);
	ft_strlcpy(res + s1_length, s2, s1_length + s2_length + 1);
	return (res);
}

//
// #include <stdio.h>
//
// int		main(void)
// {
// 	printf("%s", ft_strjoin("OMG", " WTF"));
// }
