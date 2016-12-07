/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:59:34 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/05 22:07:54 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!*s1 || !*s2)
		return (s1 - s2);
	while (n > i)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			if (ft_strlen(s1) > ft_strlen(s2))
				return (s2 - s1);
			return (s1 - s2);
		}
	}
	return (0);
}
