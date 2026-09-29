/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:53:48 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 12:56:56 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	return (((int) c >= 32) && ((int) c <= 127));
}
//
// #include <unistd.h>
//
// int	main()
// {
// 	char 	a = ft_isprint('1') + '0';
// 	char 	b = ft_isprint((char) 129) + '0';
// 	char	c = ft_isprint('\n') + '0';
// 	char	new_line = '\n';
//
// 	write(1, &a, 1);
// 	write(1, &new_line, 1);
// 	write(1, &b, 1);
// 	write(1, &new_line, 1);
// 	write(1, &c, 1);
// }
//
