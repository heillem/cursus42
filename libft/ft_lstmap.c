/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goliat <goliat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 22:36:46 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/07 18:13:12 by goliat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*prev;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	prev = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
			return (ft_lstclear(&head, del), NULL);
		if (!head)
			head = node;
		else
			prev->next = node;
		prev = node;
		lst = lst->next;
	}
	return (head);
}
