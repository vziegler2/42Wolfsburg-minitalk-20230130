/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:03:24 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:56 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Header/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc (len);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len);
	ft_strlcat(p, s2, len);
	return (p);
}

//27 Erstellt einen neuen String,
//27 in dem s2 an s1 angefügt ist und beendet mit '\0'

//21 Prüft, ob s1 oder s2 leer sind.