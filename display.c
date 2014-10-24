/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 19:49:46 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/11 14:44:15 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/ft_select.h"

static int	*print_element(int *coords, t_list *list, int *written_lines, int index)
{
	if (list->index == index)
		tputs(tgetstr("us", NULL), 1, tputs_putchar);
	if (list->select == 1)
		tputs(tgetstr("mr", NULL), 1, tputs_putchar);
	coords = get-lines_n_col(coords, list, *written_lines);
	return (coords);
}

int			*print_list(t_list *list, int index)
{
	int		*coords;
	int		written_lines;

	written_lines = 1;
	tputs(tgetstr("cl", NULL), 1, tputs_putchar);
	coords = init_coords(list);
	while (list->index < list->next->index)
	{
		coords = print_element(coords, list, &written_lines, index);
		written_lines++;
		if (written_lines + 1 >= coords[0])
			written_lines = 0;
		list = list->next;
	}

}
