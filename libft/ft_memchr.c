/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:48:09 by vicaguil          #+#    #+#             */
/*   Updated: 2026/05/25 22:21:36 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	const unsigned char	*p;
	size_t				i;

	uc = (unsigned char)c;
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == uc)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
