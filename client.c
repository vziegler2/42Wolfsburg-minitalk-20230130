/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:11:43 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/27 14:45:53 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Header/minitalk.h"

void	send_signal(int bit, int pid)
{
	if (bit == 0)
	{
		if (kill(pid, SIGUSR1) != 0)
		{
			ft_printf("Problem sending the signal!\n");
			exit(1);
		}
		usleep(100);
	}
	if (bit == 1)
	{
		if (kill(pid, SIGUSR2) != 0)
		{
			ft_printf("Problem sending the signal!\n");
			exit(1);
		}
		usleep(100);
	}
}

void	convert(char c, int pid)
{
	t_byte	*byte;

	byte = malloc(sizeof(byte));
	if (!byte)
		return ;
	*(char *) byte = c;
	send_signal(byte->b1, pid);
	send_signal(byte->b2, pid);
	send_signal(byte->b3, pid);
	send_signal(byte->b4, pid);
	send_signal(byte->b5, pid);
	send_signal(byte->b6, pid);
	send_signal(byte->b7, pid);
	send_signal(byte->b8, pid);
	free(byte);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			ft_printf("Invalid PID!\n");
			return (0);
		}
		while (argv[2][i])
		{
			convert(argv[2][i], pid);
			i++;
		}
	}
	else
		ft_printf("Usage: ./client [PID] [STRING_TO_PASS]\n");
	return (0);
}

//Z. 24 Pause zur Signalübertragung und -verarbeitung beim Empfänger.
//Z. 24 Obwohl 20 ausreichen, wurden 100 zur Sicherheit gewählt.
//Z. 44 Typecasting verändert den Variablentyp nur für dieses Statement.