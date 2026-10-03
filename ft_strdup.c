/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:30:26 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/02 02:38:20 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(char *s)
{
	size_t	length;
	char	*res;

	length = ft_strlen(s);
	res = (char *) malloc(length + 1);
	if (res)
		ft_strlcpy(res, s, length + 1);
	return (res);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*test;
// 	char	*res;
//
// 	test = "OMG";
// 	res = ft_strdup(test);
// 	if (test == res)
// 		printf("FAIL");
// 	else
// 		printf("SUCCESS");
// 	free(res);
// }
