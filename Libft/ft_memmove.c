/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:40:26 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:14 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (len--)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// Kopiert len Werte von *src zu *dst.
// Kümmert sich im Gegensatz zu memcpy um überlappende Speicherblöcke.