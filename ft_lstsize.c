/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:24:05 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 19:28:00 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list	*list;
//
// 	list = ft_lstnew("C");
// 	ft_lstadd_front(&list, ft_lstnew("B"));
// 	ft_lstadd_front(&list, ft_lstnew("A"));
//
// 	printf("%d", ft_lstsize(list));
// }
