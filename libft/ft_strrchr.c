/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:04:32 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 12:36:58 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*last;

	uc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == uc)
		{
			last = (char *)s;
		}
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (last);
}
