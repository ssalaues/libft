/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 13:17:31 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/02 21:47:47 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	unsigned char c1;
	size_t nb;

	src = (unsigned char *)s;
	c1 = c;
	nb = 0;
	while (*src != c1 || n > nb)
	{
		if (*src == c1)
			return (src);
		src++;
		nb++;
	}
	return (NULL);
}
