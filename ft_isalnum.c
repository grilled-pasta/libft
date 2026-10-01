/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:28:57 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 14:44:17 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
//
// #include <unistd.h>
//
// int	main()
// {
// 	char 	a = ft_isalnum('1') + '0';
// 	char 	b = ft_isalnum('A') + '0';
// 	char	c = ft_isalnum('~') + '0';
// 	char	new_line = '\n';
//
// 	write(1, &a, 1);
// 	write(1, &new_line, 1);
// 	write(1, &b, 1);
// 	write(1, &new_line, 1);
// 	write(1, &c, 1);
// }
//
