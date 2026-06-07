/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goliat <goliat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 22:17:12 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/07 17:18:34 by goliat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	copy;

	copy = n;
	if (copy < 0)
	{
		copy = (copy * -1);
		write(fd, "-", 1);
	}
	if (copy > 9)
	{
		ft_putnbr_fd(copy / 10, fd);
		ft_putchar_fd((copy % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copy + '0', fd);
}
