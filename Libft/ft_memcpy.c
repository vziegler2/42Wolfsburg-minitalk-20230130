/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:24:11 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:10 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		((char *) dst)[n] = ((char *) src)[n];
	return (dst);
}

// Ersetzt n Positionen ab *dst mit den Positionen ab *src.
// Wenn dst vor src liegt und der Zielstring in src hineinreicht (überlappt),
// wiederholt sich der kopierte Teil weil src von rechts nach links
// geändert wird -> dann lieber memmove verwenden
// Wenn beide Strings leer sind wird ein NULL-Pointer zurückgegeben.
// Wenn nur dst leer ist, wird src kopiert.
// Wenn nur src leer ist, wird nichts kopiert.