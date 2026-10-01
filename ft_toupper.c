/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 21:54:40 by alla              #+#    #+#             */
/*   Updated: 2026/10/01 22:00:11 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && (c >= 'a' && c <= 'z'))
	{
		return ('A' + c - 'a');
	}
	return (c);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// }
