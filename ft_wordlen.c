/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:16:07 by ssalaues          #+#    #+#             */
/*   Updated: 2016/12/07 10:06:09 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_wordlen(char *s, char c)
{
    int ct;
    
    ct = 0;
    while (*s != c && *s)
    {
        s++;
        ct++;
    }
}
