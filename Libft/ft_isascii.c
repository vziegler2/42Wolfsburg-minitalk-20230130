/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:45:02 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/24 11:15:53 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// Prüft, ob der Wert in der ASCII-Tabelle enthalten ist.
// Falls ja, wird 1 zurückgegeben.
// Falls nein, wird 0 zurückgegeben.