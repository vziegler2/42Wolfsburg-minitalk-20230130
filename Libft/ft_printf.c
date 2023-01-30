/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:58:47 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:17:38 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../Header/libft.h"

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] != '%')
			ret += write(1, &string[i], 1);
		else
		{
			i++;
			ret += ft_check(args, string[i]);
		}
		i++;
	}
	va_end(args);
	return (ret);
}
