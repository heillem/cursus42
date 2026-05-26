/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:56:22 by vicaguil          #+#    #+#             */
/*   Updated: 2026/05/19 18:00:57 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchar(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == 0)
		return ((char *)s);
	return (NULL);
}
