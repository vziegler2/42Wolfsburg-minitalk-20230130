/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:35:18 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:18:08 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

int	ft_printx(unsigned int x, int s)
{
	int	ret;

	ret = 0;
	if (x >= 16)
	{
		ret += ft_printx(x / 16, s);
		ret += ft_printx(x % 16, s);
	}
	else
	{
		if (x < 10)
			ret += ft_printc(x + 48);
		else
		{
			if (s == 1)
				ret += ft_printc(x + 87);
			else
				ret += ft_printc(x + 55);
		}
	}
	return (ret);
}
