/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:45:30 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 12:53:22 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	return (((int) c >= 0) && ((int) c <= 127));
}

// #include <unistd.h>
//
// int	main()
// {
// 	char 	a = ft_isascii('1') + '0';
// 	char 	b = ft_isascii((char) 129) + '0';
// 	char	c = ft_isascii('~') + '0';
// 	char	new_line = '\n';
//
// 	write(1, &a, 1);
// 	write(1, &new_line, 1);
// 	write(1, &b, 1);
// 	write(1, &new_line, 1);
// 	write(1, &c, 1);
// }
//
