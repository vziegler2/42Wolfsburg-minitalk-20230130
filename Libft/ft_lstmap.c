/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:35:31 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:19:48 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*b;

	r = NULL;
	while (lst)
	{
		b = ft_lstnew((*f)(lst->content));
		if (!b)
		{
			ft_lstclear(&r, del);
			return (NULL);
		}
		ft_lstadd_back(&r, b);
		lst = lst->next;
	}
	return (r);
}

//24 Wendet die Funktion auf jeden Knoten der Liste an.
//24 und erstellt daraus einen neuen Knoten.
//27 Die del-Funktion wird ggfs. zur Listenlöschung genutzt,
//27 falls ein neuer Knoten nicht erstellt werden konnte.
//33 Gibt die neue Liste zurück.

//16 Die Funktion gibt einen Pointer zurück, der verlangt wird.
//27 &n weil ein Doppelpointer verlangt wird (genauso 30),
//27 del entspricht dagegen schon dem geforderten Format.