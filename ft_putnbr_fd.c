/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:03:23 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/01 21:14:01 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char *min;
	char *max;

	nb = 0;
	min = "-2147483648";
	max = "2147483647";
	if (n == -2147483648)
		while (*min)
			write(fd, min++, 1);
	if (n == 2147483647)
		while (*max)
			write(fd, max++, 1);
	if (n < 0 && n != -2147483648 && n != 2147483647)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 9 && n != -2147483648 && n != 2147483647)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n != -2147483648 && n != 2147483647)
//		ft_putchar_fd(n + '0', fd);
	{
		nb = n + '0';
		write(fd, &nb, 1);
	}
}
