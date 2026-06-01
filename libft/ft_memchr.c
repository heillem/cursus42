/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:48:09 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 11:31:00 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*palabra;
	char	*resultado;

	palabra = "hola";
	resultado = ft_memchr(palabra, 'l', 5);
	// resultado = ft_memchr(palabra, 'x', 5);
	printf("%p", resultado);
}*/
