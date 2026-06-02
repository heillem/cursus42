/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 22:36:46 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 22:38:51 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		tmp = malloc(sizeof(t_list));
		if (!tmp)
			return (ft_lstclear(&head, del), NULL);
		tmp->content = f(lst->content);
		tmp->next = NULL;
		if (!head)
			head = tmp;
		else
			new->next = tmp;
		new = tmp;
		lst = lst->next;
	}
	return (head);
}
