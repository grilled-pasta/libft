/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:29:25 by alkonsta          #+#    #+#             */
/*   Updated: 2026/09/29 14:44:15 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}
//
// #include <stdio.h>
//
// int main()
// {
// 	char	*str1 = "";
// 	char	*str2 = "omg";
// 	char	str3[1];
//
// 	str3[0] = '\0';
// 	printf("%zu\n", ft_strlen(str1));
// 	printf("%zu\n", ft_strlen(str2));
// 	printf("%zu\n", ft_strlen(str3));
// }
