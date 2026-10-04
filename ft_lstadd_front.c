/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkonsta <alkonsta@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:55:40 by alkonsta          #+#    #+#             */
/*   Updated: 2026/10/04 19:24:57 by alkonsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}
//
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*temp;
//
// 	list = ft_lstnew("B");
// 	ft_lstadd_front(&list, ft_lstnew("A"));
// 	temp = list;
//
// 	while (temp)
// 	{
// 		printf("%s,\t", (char *) temp->content);
// 		temp = temp->next;
// 	}
// }
