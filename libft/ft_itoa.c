/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goliat <goliat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:58:12 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/07 18:06:28 by goliat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	digits;

	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
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
	int		sign;
	char	*str;

	nb = (long)n;
	sign = (nb < 0);
	digits = count_digits(nb) + sign;
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
