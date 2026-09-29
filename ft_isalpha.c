/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:20:02 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 12:42:53 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

//
// #include <unistd.h>
//
// int	main()
// {
// 	char 	a = ft_isalpha('1') + '0';
// 	char 	b = ft_isalpha('A') + '0';
// 	char	new_line = '\n';
//
// 	write(1, &a, 1);
// 	write(1, &new_line, 1);
// 	write(1, &b, 1);
// }
//
