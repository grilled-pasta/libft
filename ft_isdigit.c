/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:23:26 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 12:28:43 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

//
// #include <unistd.h>
//
// int	main()
// {
// 	char 	a = ft_isdigit('1') + '0';
// 	char 	b = ft_isdigit('A') + '0';
// 	char	new_line = '\n';
//
// 	write(1, &a, 1);
// 	write(1, &new_line, 1);
// 	write(1, &b, 1);
// }
//
