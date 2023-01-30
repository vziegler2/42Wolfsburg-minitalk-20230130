/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:13:36 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:19:31 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;
	t_list	*nx;

	n = *lst;
	while (n)
	{
		nx = n->next;
		ft_lstdelone(n, del);
		n = nx;
	}
	*lst = NULL;
}

//25 Löscht den content des übergebenen und aller Nachfolgeknoten.
//25 Gibt anschließend deren Speicherplatz frei.
//28 Die Anfangsadresse der übergebenen Liste wird auf NULL gesetzt,
//28 damit der Endpunkt der bestehenden Liste wieder hergestellt ist.