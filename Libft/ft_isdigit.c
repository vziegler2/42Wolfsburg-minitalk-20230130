/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:40:51 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/13 13:51:09 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// Prüft, ob der Wert numerisch ist.
// Falls ja, wird 1 zurückgegeben.
// Falls nein, wird 0 zurückgegeben.