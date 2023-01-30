/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:48:29 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:16 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Header/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// Wendet eine Funktion auf jeden Wert eines Strings an
// Gibt den so neu kreierten String zurück.
// Die Argumente sind ein Zeiger auf eine Zeichenfolge
// und ein Zeiger auf eine Funktion.

//21 Wenn s oder f nicht existieren, wird NULL zurückgegeben.
//23 Reserviert den neuen Speicher.
//29 Jedes Zeichen wird durch die übergebene Funktion transformiert
//29 und das neue Zeichen im neuen String gespeichert.
//32 Der neue String wird terminiert.