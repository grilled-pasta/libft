/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:08:28 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/02 02:15:52 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nptr)
{
	int	res;
	int	sign;

	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	res = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * res);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" \t-123a"));
// }
