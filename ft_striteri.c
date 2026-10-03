/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:25:14 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/03 18:34:41 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (i < (int) ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
//
// #include <stdio.h>
//
// void	inc(unsigned int i, char *c)
// {
// 	*c = *c + 1;
// }
//
// int	main(void)
// {
// 	char	*test = "abcdef";
//
// 	ft_striteri(test, inc);
// 	printf("%s", test);
// }
