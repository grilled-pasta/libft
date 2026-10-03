/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:04:11 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/01 22:05:15 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && (c >= 'A' && c <= 'Z'))
	{
		return ('a' + c - 'A');
	}
	return (c);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// }
