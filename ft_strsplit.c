/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:40:29 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/05 14:56:55 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		nb;
	int		i;

	i = 0;
	nb = ft_wcount(s, c);
	str = (char **)malloc(sizeof(*str) * (ft_wcount(s, c) + 1));
	if (!str)
		return (NULL);
	while (nb--)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = ft_strsub((const char *)s, 0, ft_wlen(s, c));
		if (str[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		i++;
	}
	return (str);
}
