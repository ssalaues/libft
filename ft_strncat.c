/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:02:25 by ssalaues          #+#    #+#             */
/*   Updated: 2016/11/29 21:18:43 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	i2;

	i = ft_strlen(s1);
	i2 = ft_strlen(s2);
	if (n > i2)
		ft_strcat(s1, s2);
	else
		ft_strncpy(&s1[i], s2, n);
	return (s1);
}
