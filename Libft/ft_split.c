/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:29:32 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/13 21:20:40 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Header/libft.h"

static int	ft_arr(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static void	ft_char(char const *s, char c, int *ai, int *alen)
{
	int	i;
	int	len;

	i = *ai;
	len = *alen;
	while (s[i] == c)
		i++;
	len = i;
	while (s[len] != c && s[len])
		len++;
	*alen = len;
	*ai = i;
}

static char	**ft_del(char **r)
{
	int	i;

	i = 0;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	r = malloc(sizeof(char *) * (ft_arr(s, c) + 1));
	if (!r)
		return (NULL);
	while (j < (ft_arr(s, c)))
	{
		ft_char(s, c, &i, &len);
		r[j] = ft_substr(s, i, len - i);
		if (!r[j])
			return (ft_del(r));
		i = len;
		j++;
	}
	r[j] = NULL;
	return (r);
}

// Erstellt ein neues Array von Teilstrings
// c teilt den Originalstring
// Das Array endet mit einem NULL-Pointer
// Error: Malloc-Protection und fehlendes free

//23 s überspringt alle c und speichert den ersten Nicht-c-Punkt
//26 t überspringt alle Nicht-c-Punkte und speichert den ersten c-Punkt
//30 Substring von s bis t
//32 Der nächste String wird markiert
//35 Auch Arrays von Arrays werden terminiert