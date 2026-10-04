/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:38:29 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 19:49:49 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list	*lst;
//
// 	lst = ft_lstnew("C");
// 	ft_lstadd_front(&lst, ft_lstnew("B"));
// 	ft_lstadd_front(&lst, ft_lstnew("A"));
// 	ft_lstadd_back(&lst, ft_lstnew("D"));
// 	t_list *last = ft_lstlast(lst);
// 	printf("%s", (char *) last->content);
// }
