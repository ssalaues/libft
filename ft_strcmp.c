/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:44:03 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/04 16:56:04 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (!*s1 || !*s2)
		return (s1 - s2);
	while ((s1[i] || s2[i]) != '\0')
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
	return (s1[i] - s2[i]);
}
