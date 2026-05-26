/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:18:27 by vicaguil          #+#    #+#             */
/*   Updated: 2026/05/26 14:20:47 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;
	size_t i;

	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i + needle_len <= len && haystack[i])
	{
		if(ft_memcmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

int	main()
{
	ft_strnstr("hola mundo", "mun", 10);
	printf("%s", ft_strnstr());
}
