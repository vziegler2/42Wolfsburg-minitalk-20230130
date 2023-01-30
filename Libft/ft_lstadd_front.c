/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:58:31 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:19:15 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// Fügt den Knoten new an den Anfang der Liste

//17 Das next-Element der neuen Struktur zeigt auf
//17 die Adresse des ersten Elements der Liste.
//18 Der Start-Pointer zeigt (nur) auf die neue Struktur.