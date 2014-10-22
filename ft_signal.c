/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 13:14:46 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 15:49:39 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

static void					ft_signal_init(void)
{
	signal(SIGINT, &ft_signal);
}

void						ft_signal(int n)
{
	static struct termios	*term;
	struct termios			terminal;
	char					buffer[1024];

	(void)n;
	if (term == NULL)
	{
		ft_signal_init();
		if (tgetent(buffer, getenv("TERM")) < 1)
			return ;
		term = (struct termios*)malloc(sizeof(struct termios));
		tcgetattr(0, term);
		terminal = *term;
		terminal.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(0, 0, &terminal);
	}
	else
	{
		tcsetattr(0, 0, term);
		exit(0);
	}
	return ;
}
