/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:14:12 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:05 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

//18 size_t für die Vergleichbarkeit mit dstsize
//23 '\0' wird gesetzt, falls dstsize = 1 ist

// Kopiert entweder srclen oder dstsize-1 Werte inkl. '\0' nach dst.
// Wenn der Return-Wert srclen >= dstsize ist, wird dst gekürzt.
// Bei der Angabe von dstsize muss '\0' dazugerechnet werden.
// Gibt srclen (ohne '\0') zurück.
// Achtet nicht darauf, ob dst zu klein für dstsize ist.
// Überschneidungen werden nicht behandelt.