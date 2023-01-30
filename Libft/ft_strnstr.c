/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:25:07 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:21:25 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *) haystack);
	while (*haystack && len-- >= nlen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}

// Sucht in den ersten len Werten des ersten Strings nach dem zweiten String.
// Returned die Speicheradresse des ersten Auftretens des zweiten Strings.
// Bricht bei Auftreten von '\0' im ersten String ab.
// Wenn der zweite String leer ist, wird der erste returned.
// Wenn der zweite String im ersten nicht auftaucht, wird NULL returned.