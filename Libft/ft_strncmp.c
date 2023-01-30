/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:27:19 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:20 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (n-- && (*p1 || *p2))
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// Sucht nach Unterschieden von n Werten zweier Strings.
// Gibt beim ersten Unterschied (unsigned char) *s1 - *s2 (ASCII-Werte) zurück.
// Unsigned char ist im man so definiert.
// Gibt 0 zurück, falls beide Strings identisch sind.
// Würde man p1 und p2 nicht definieren, müsste man die ganze Zeit typcasten.