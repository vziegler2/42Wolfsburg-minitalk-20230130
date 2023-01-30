/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:27:44 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:19:39 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Wendet die Funktion auf jeden Knoten der Liste an.
// Die Knotenverbindungen bleiben erhalten,
// die Funktion verändert nur die restlichen Listenelemente.
// Setzt eine valide Liste voraus.