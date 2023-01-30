/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:59:12 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:46 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

// Sucht c im String
// Alle returns und ifs müssen getypecasted werden (francinette) und
// sonst sind Vergleiche nicht möglich bzw. der return-Wert hat den falschen Typ

// 23 Falls c == '\0' (der direkte Vergleich damit klappt aber nicht)