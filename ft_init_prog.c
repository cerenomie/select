/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_prog.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 12:04:07 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 15:48:44 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

int			tputs_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

void		ft_init_prog(t_list *list, int max_elem)
{
	int		i;
	int		*index;
	int		*coords;

	ft_signal(0);
	index = (int *)malloc(sizeof(int) * 3);
	index[0] = 1;
	index[1] = 1;
	index[2] = 1;
	coords = print_list(list);
	i = -1;
	while (++i < coords[2])
		tputs(tgetstr("up", NULL), 1, tputs_putchar);
	ft_init_prog_deleg(list, index, coords, max_elem);
}

void		ft_init_prog_deleg(t_list *list, int *index, int *coords, int max)
{
	char	*buf;

	buf = ft_strnew(4);
	while (read(0, buf, 4))
	{
		if (buf[0] == 27 && buf[2] != 51)
			ft_arrow_all(&index, coords, max, buf);
		else if ((buf[0] == 127 && buf[1] == 0 && buf[2] == 0)
				|| (buf[0] == 27 && buf[1] == 91 && buf[2] == 51))
		{
			del_list(list, index[0]);
			print_list(list);
		}
		else if (buf[0] == 10 && buf[1] == 0 && buf[2] == 0)
			ft_putendl("RETURN");
		else if (buf[0] == 32 && buf[1] == 0 && buf[2] == 0)
			ft_putendl("SPACE");
		ft_bzero(buf, 4);
	}
}
