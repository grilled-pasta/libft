/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:52:15 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 20:10:31 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
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
// 	t_list	*node = ft_lstnew(ft_strdup("B"));
// 	ft_lstadd_back(&lst, node);
// 	ft_lstdelone(lst, &ft_del);
// 	printf("%d", ft_lstsize(node));
// }
