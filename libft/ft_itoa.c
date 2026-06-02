/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:58:12 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 22:02:19 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(long n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits = 1;
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		digits;
	char	*str;

	nb = (long)n;
	digits = count_digits(nb);
	if (nb < 0)
		digits++;
	str = (char *)malloc(digits + 1);
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--digits] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}
