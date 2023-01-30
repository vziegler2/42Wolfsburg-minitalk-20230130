/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:50:04 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:19:05 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbrlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = 45;
		if (n == -2147483648)
		{
			str[--len] = 56;
			n /= 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

// Wandelt eine (+/-)Zahl in einen String

//21 Ein Speicherplatz wird für das Minus oder die Null benötigt
//37 Ein Speicherplatz wird für den Terminator benötigt
//37 calloc wird verwendet, damit die Adressen gleich mit '\0' gefüllt werden
//42 Fall negative Zahl -> Minus setzen
//45 Fall INT_MIN -> 8 setzen
//52 String wird von hinten gebildet -> Nach jeder Char-Zuweisung int reduzieren