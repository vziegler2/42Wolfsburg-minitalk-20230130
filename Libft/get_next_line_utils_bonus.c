/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:51:07 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:18:24 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Header/libft.h"

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	len;
	size_t	c;
	size_t	i;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		*s1 = '\0';
	}
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc (len);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len);
	c = -1;
	i = ft_strlen(p);
	while (s2[++c])
		p[i + c] = s2[c];
	p[i + c] = '\0';
	free(s1);
	return (p);
}
