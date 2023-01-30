/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:13:38 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/27 15:47:40 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Header/minitalk.h"

t_byte	g_char;

void	set_bit(int bit, int *i)
{
	if (*i == 1)
		g_char.b1 = bit;
	if (*i == 2)
		g_char.b2 = bit;
	if (*i == 3)
		g_char.b3 = bit;
	if (*i == 4)
		g_char.b4 = bit;
	if (*i == 5)
		g_char.b5 = bit;
	if (*i == 6)
		g_char.b6 = bit;
	if (*i == 7)
		g_char.b7 = bit;
	if (*i == 8)
	{
		g_char.b8 = bit;
		ft_printf("%s", &g_char);
		*i = 0;
	}
}

void	handler(int sig)
{
	static int	i;

	i++;
	if (sig == SIGUSR1)
		set_bit(0, &i);
	else
		set_bit(1, &i);
}

int	main(void)
{
	ft_printf("PID is: %i\n", getpid());
	signal(SIGUSR1, &handler);
	signal(SIGUSR2, &handler);
	while (1)
		pause();
	return (0);
}

//Z. 15 Kein Pointer, da keine Speicherallokation möglich.
//Z. 15 Global, da set_bit zu lang würde.
//Z. 36 funktioniert nur, wenn %s statt %c angegeben wird.
//Z. 43 static, weil handler offensichtlich mehrmals aufgerufen wird.
//Z. 45 i wird nur beim ersten Mal initialisiert.
//Z. 49 SIGUSR1 entspricht 0, weil in client.c festgelegt.
//Z. 61 Ruft handler auf, wenn SIGUSR1 empfangen wird.
//Z. 63 Gibt die Prozess-ID des aufrufenden Prozesses zurück.
//Z. 64 Endlosschleife für den Wartemodus auf Signale.

//Ablauf:
//Programmstart -> PID wird geprintet -> Kein Signal -> Wartemodus auf Signal