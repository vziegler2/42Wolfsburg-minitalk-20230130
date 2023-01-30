/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:57:16 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:37 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Header/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > slen)
	{
		p = malloc(sizeof(char));
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	else
	{
		if (start + len > slen)
			len = slen - start;
		p = malloc(sizeof(char) * (len + 1));
		if (!p)
			return (NULL);
		ft_strlcpy(p, s + start, len + 1);
		return (p);
	}
}

//37 Es wird ein terminierter len-Teilstring aus s gebildet,
//37 der ab dem Index start beginnt.
//37 Der Teilstring wird bei Erfolg zurückgegeben, sonst NULL.

//20 Existiert s nicht, wird NULL zurückgegeben.
//22 Ist der Index höher als der Ursprungsstring,
//22 wird ein leerer terminierter String zurückgegeben.
//32 Wird len zu lang gewählt, sodass start + len über den
//32 Ursprungsstring hinausragt, wird nur der Bereich von
//32 start bis Stringende erstellt.