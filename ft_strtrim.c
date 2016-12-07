/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:41:02 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/05 14:39:15 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	size_t i1;
	size_t i2;

	i1 = 0;
	i2 = ft_strlen(s);
	while (s[i1] == ' ' || s[i1] == '\n' || s[i1] == '\t')
		i1++;
	while (--i2 > 0 && (s[i2] == ' ' || s[i2] == '\n' || s[i2] == '\t'))
		;
	if (i2 < i1)
		return ("");
	str = ft_strsub(s, i1, i2 - i1 + 1);
	if (!str)
		return (NULL);
	return (str);
}
