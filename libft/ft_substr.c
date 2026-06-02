/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:08:28 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 21:21:08 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub_len = ft_strlen(s + start);
	if (sub_len > len)
		sub_len = len;
	sub = (char *)malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, sub_len);
	sub[sub_len] = '\0';
	return (sub);
}
