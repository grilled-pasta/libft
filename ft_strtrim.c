/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:58:15 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/02 18:36:39 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	while (s1 && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	res = (char *) malloc(end - start + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 1);
	return (res);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%s", ft_strtrim("  , ab c d, ", " ,"));
// }
