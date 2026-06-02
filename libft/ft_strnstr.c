/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:18:27 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 21:04:43 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t len)
{
	size_t	ptr_len;
	size_t	i;

	ptr_len = 0;
	while (ptr[ptr_len])
		ptr_len++;
	if (ptr_len == 0)
		return ((char *)str);
	i = 0;
	while (i + ptr_len <= len && str[i])
	{
		if (ft_memcmp(str + i, ptr, ptr_len) == 0)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s", ft_strnstr("hola mundo", "mun", 10));
}
