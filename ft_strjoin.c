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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;

	res = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcpy(res + ft_strlen(s1), s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (res);
}
//
// #include <stdio.h>
//
// int		main(void)
// {
// 	printf("%s", ft_strjoin("OMG", " WTF"));
// }
