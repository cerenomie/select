/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 12:04:07 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/24 17:24:48 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

static int	init_prog(struct termios *term, t_list *list, int max, int **coord)
{
	int	*index;

	tcgetattr(0, term);
	init_term(*term);
	index = init_index(max);
	*coord = print_list(list, index[0]);
}

int			is_prog(t_list *list, int max_elem)
{
	int		*index;
	char	buffer[2048];

	if (tgetent(buffer, getenv("TERM")) < 1)
		return (-1);
	index = init_prog(&term, list, max_elem, &coords);
}
