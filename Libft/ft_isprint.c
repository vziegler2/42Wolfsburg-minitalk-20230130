/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:49:53 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/13 16:01:57 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// Prüft, ob der Wert druckbar ist.
// Falls ja, wird 1 zurückgegeben.
// Falls nein, wird 0 zurückgegeben.
// Alle anderen Werte sind Kontrollwerte.