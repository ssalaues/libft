/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:52:34 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/04 12:48:16 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t count;
	long long i1;

	count = 0;
	i1 = (size - ft_strlen(dst) - 1);
	if (i1 > 0)
		count = ft_strlen(ft_strncat(dst, src, i1));
	else
		count = ft_strlen(dst) + ft_strlen(src) + i1 + 1;;
	return (count);
}
