/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:07:36 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:18:02 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

int	ft_printu(unsigned int u)
{
	int	ret;

	ret = 0;
	if (u >= 10)
	{
		ret += ft_printu(u / 10);
		ret += ft_printu(u % 10);
	}
	else
		ret += ft_printc(u + 48);
	return (ret);
}

// u wird durch 10 geteilt bis es < 10 ist.
// Die letzte Funktion erhöht ret um 1 durch printc.
// Alle anderen Funktionen verharren bei Modulo mit einem u > 10.
// Modulo ist aber < 10, daher wird ret erneut durch printc um 1 erhöht.
// Danach wird ret an die vorherige Funktion übergeben.
// Es wird also von links nach rechts gedruckt.