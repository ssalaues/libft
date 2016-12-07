/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:14:49 by ssalaues          #+#    #+#             */
/*   Updated: 2016/11/29 15:32:27 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *tmp;
	int i;

	tmp = s1;
	i = ft_strlen(tmp);
	ft_strcpy(&tmp[i], s2);
	return (s1);
}
