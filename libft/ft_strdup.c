/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 20:19:16 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 20:36:05 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
