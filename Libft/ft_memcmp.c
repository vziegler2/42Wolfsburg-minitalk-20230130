/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:51:48 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:07 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if ((*(unsigned char *) s1) != (*(unsigned char *) s2))
			return ((*(unsigned char *) s1) - (*(unsigned char *) s2));
		s1++;
		s2++;
	}
	return (0);
}

// Sucht nach Unterschieden von n Speicheradressen zweier Strings.
// Gibt beim ersten Unterschied (unsigned char) *s1 - *s2 (ASCII-Werte) zurück.
// Gibt 0 zurück, falls keine Unterschiede bis n bestehen.
// Endet im Unterschied zu strncmp nicht, wenn beide Strings enden.