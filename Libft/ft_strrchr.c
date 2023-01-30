/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:50:39 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:29 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == (char) c)
			return ((char *)(s + slen));
		slen--;
	}
	return (NULL);
}

// Findet das letzte c im String s, ansonsten return NULL
// c kann auch '\0' sein
// i muss ein int sein, um mit char vergleichbar zu sein
// Wenn man rückwärts vergleicht, muss der Index 0 mit geprüft werden
// Der return-Wert muss gecastet werden, da s const ist.