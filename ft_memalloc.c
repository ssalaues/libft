/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:03:13 by ssalaues          #+#    #+#             */
/*   Updated: 2016/11/30 17:33:09 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memalloc(size_t size)
{
	size_t *rt;
	
	rt = malloc(sizeof(size));
	if (size >= 4294967295)
		return (NULL);
	if (rt != NULL)
	{
		ft_memset(rt, 0, size);
		return (rt);
	}
	return (NULL);
}
