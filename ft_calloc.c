/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:19:23 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 17:33:18 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	if (size != 0 && n > ((size_t)-1 / size))
		return (NULL);
	res = (void *) malloc(n * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, n * size);
	return (res);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	*res;
// 	int	i;
//
// 	res = (int *) ft_calloc(3, sizeof(int));
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\t", res[i]);
// 		i++;
// 	}
// 	free(res);
// }
