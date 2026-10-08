/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:13:38 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 20:56:38 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_f(void *content)
// {
// 	((char *) content)[0]++; 
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
// 	ft_lstiter(lst, &ft_f);
// 	t_list *last = ft_lstlast(lst);
// 	printf("%s", (char *) last->content);
// }
