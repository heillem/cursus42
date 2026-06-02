/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 22:18:28 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 22:20:08 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list	*prueba;

	prueba = (t_list *)malloc(sizeof(t_list));
	if (!prueba)
		return (NULL);
	prueba->content = (void *)content;
	return (prueba);
}
