/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:15:39 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:01 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *) s) == (unsigned char) c)
			return ((void *) s);
		s++;
	}
	return (NULL);
}

// Sucht nach dem Wert (unsigned char) c in n Speicherbereichen eines Strings.
// Gibt beim ersten Auftreten die Speicheradresse als (void *) zurück.
// Gibt NULL zurück, falls c nicht gefunden wird.