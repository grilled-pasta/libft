/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:57:30 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 21:11:33 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	res = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
//
// void	ft_del(void *content)
// {
// 	free(content);
// }
//
// void	*ft_f(void *content)
// {
// 	((char *) content)[0]++;
// 	return (content);
// }
//
// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*res;
//
// 	lst = ft_lstnew(ft_strdup("C"));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("B")));
// 	res = ft_lstmap(lst, &ft_f, &ft_del);
// 	t_list *last = ft_lstlast(res);
// 	printf("%s", (char *) last->content);
// }
