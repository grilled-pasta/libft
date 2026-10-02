/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 21:33:57 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/02 22:39:38 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	count_n(long n)
{
	int	count;

	count = 1;
	while (n / 10 > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static	void	ft_itoa_recursive(char *res, long n, int i)
{
	if (n / 10 != 0)
		ft_itoa_recursive(res, n / 10, i - 1);
	res[i] = '0' + (n % 10);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	long	nb;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	res = (char *) malloc(count_n(nb) + 1 + sign);
	if (!res)
		return (NULL);
	if (sign == 0)
		ft_itoa_recursive(res, nb, count_n(nb) - 1);
	else
	{
		res[0] = '-';
		ft_itoa_recursive(res + 1, nb, count_n(nb) - 1);
	}
	res[count_n(nb) + sign] = '\0';
	return (res);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*res;
//
// 	res = ft_itoa(-2147483648);
// 	printf("%s\n", res);
// }
