/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:29:45 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:01 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] && i < (dstsize - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// Verhindert ein überlaufen des erzeugten dst-Strings.
// Gibt die Länge der kombinierten Strings ohne '\0' zurück.
// 25 Der Zielstring ist schon größer als die angegebene max. Stringlänge.
// 25 Warum dstsize + srclen zurückgegeben wird ist mir unklar (francinette).
// 27 i ist nicht durch src-String und dstsize ist nicht voll.