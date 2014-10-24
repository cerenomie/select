/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggobin <ggobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 19:07:50 by ggobin            #+#    #+#             */
/*   Updated: 2014/01/12 19:39:07 by ggobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		init_term(struct termios term)
{
	term.c_lflag &= ~(ICANON | ECHO);
	term.c_lflag |= ISIG;
	tcsetattr(0, 0, &term);
	tputs(tgetstr("ti", NULL), 1, tputs_putchar);
	tputs(tgetstr("vi", NULL), 1, tputs_putchar);
}

int			*init_index(int max_elem)
{
	int		*index;

	index = malloc(sizeof(int) * 4);
	index[0] = 1;
	index[1] = 1;
	index[2] = 1;
	index[3] = max_elem;
	return (index);
}

int		*init_coords(t_list *list)
{
	int	*coords;

	coords = malloc(sizeof(int) * 4);
	coords[0] = get_term_size(0);
	coords[1] = count_len(list);
	coords[2] = 1;
	coords[3] = 1;
	return (coords);
}
