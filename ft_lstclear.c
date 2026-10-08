/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:00:15 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 20:12:31 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
}

// void	ft_del(void *content)
// {
// 	free(content);
// }
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list	*lst;
//
// 	lst = ft_lstnew(ft_strdup("C"));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("B")));
// 	ft_lstclear(&lst, &ft_del);
// 	t_list *last = ft_lstlast(lst);
// 	printf("%d", ft_lstsize(lst));
// }
