/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:03:41 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/05 21:11:50 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *tmp;
	char *s1;

	s1 = (char *)s;
	str = ft_strnew(ft_strlen(s));
	tmp = str;
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = f(*s1++);
	return (tmp);
}
