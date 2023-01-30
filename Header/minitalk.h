/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:13:32 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/27 16:03:33 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct byte
{
	unsigned	b1:1;
	unsigned	b2:1;
	unsigned	b3:1;
	unsigned	b4:1;
	unsigned	b5:1;
	unsigned	b6:1;
	unsigned	b7:1;
	unsigned	b8:1;
}	t_byte;

#endif

//Bitfeld-Operator ":1" -> Es wird ein Bit und nicht ein Byte gespeichert.
//unsigned int, um zu sichern, dass nur 0 und 1 möglich sind.