/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:39:50 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/22 18:35:42 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	r;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45)
		n = -1;
	else
		n = 1;
	if (*str == 45 || *str == 43)
		str++;
	r = 0;
	while (*str >= 48 && *str <= 57)
		r = (r * 10) + (*str++ - 48);
	return (r * n);
}

// Wandelt eine char-Zahl in eine int-Zahl um
// Kümmert sich nicht um mehrere Vorzeichen