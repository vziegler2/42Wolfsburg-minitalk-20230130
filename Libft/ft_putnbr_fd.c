/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:10:54 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:28 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}
	if (ln <= 9)
		ft_putchar_fd(ln + 48, fd);
	else
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
}

// Übergibt eine Zahl dem angegebenen file descriptor

//18 Umwandlung von n in long, 
//18 damit auch der Sonderfall n = -2147483648 bearbeitet werden kann.
//27 Der ASCII-Wert der Zahl wird an putchar_fd übergeben
//30 Teilt solange durch 10 bis ln <= 9 ist und
//30 gibt anschließend die Modulos aus.