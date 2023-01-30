/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:05:43 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/15 22:17:48 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <stdlib.h>

int	ft_printi(int i)
{
	int		ret;
	char	*print;

	ret = 0;
	print = ft_itoa(i);
	ret = ft_prints(print);
	free(print);
	return (ret);
}
