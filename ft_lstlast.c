/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:28:45 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 19:36:59 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
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
// 	t_list *last = ft_lstlast(lst);
// 	printf("%s", (char *) last->content);
// }
