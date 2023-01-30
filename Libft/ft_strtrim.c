/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:03:22 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:33 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	b;
	int	e;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	b = 0;
	e = len - 1;
	while (b <= len / 2 && ft_strchr(set, s1[b]) != NULL)
		b++;
	while (e >= len / 2 && ft_strchr(set, s1[e]) != NULL)
		e--;
	if (e < b)
		return (ft_strdup(""));
	len = e - b;
	return (ft_substr(s1, b, len + 1));
}

// Erstellt einen Substring, dem der set-String am Anfang und Ende fehlt.

//23 Testet, ob s1 leer ist.
//28 Geht den String von vorne und hinten durch
//32 Es wird ein leerer String zurückgegeben,
//32 weil alles (bis auf '\0') gelöscht wurde.