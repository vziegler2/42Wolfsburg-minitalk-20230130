/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:10:15 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:18:57 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// Prüft, ob der Wert alphanumerisch ist.
// Falls ja, wird 1 zurückgegeben.
// Falls nein, wird 0 zurückgegeben.
// libft.h steht in Anführungszeichen, da es ein Dateipfad ist (der sich
// hier im selben Ordner wie die c.-Datei befindet)