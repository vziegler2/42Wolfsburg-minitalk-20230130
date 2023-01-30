/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:20:43 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:17:21 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <unistd.h>

int	ft_check(va_list args, const char check)
{
	int	ret;

	ret = 0;
	if (check == '%')
		ret += write(1, "%", 1);
	else if (check == 'c')
		ret += ft_printc(va_arg(args, int));
	else if (check == 's')
		ret += ft_prints(va_arg(args, char *));
	else if (check == 'd' || check == 'i')
		ret += ft_printi(va_arg(args, int));
	else if (check == 'u')
		ret += ft_printu(va_arg(args, unsigned int));
	else if (check == 'p')
	{
		ret += write(1, "0x", 2);
		ret += ft_printp(va_arg(args, unsigned long));
	}
	else if (check == 'x')
		ret += ft_printx(va_arg(args, unsigned int), 1);
	else if (check == 'X')
		ret += ft_printx(va_arg(args, unsigned int), 2);
	return (ret);
}
