/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goliat <goliat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:18:01 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/07 16:52:36 by goliat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dst;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}

/*int	main(void)
{
	char str1[] = "hola mundo";
	char str2[] = "coño";
	printf("%s", ft_memcpy(str1, str2, 4));
}*/
