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

static int		count_len(t_list *list)
{
	size_t	max_len;

	max_len = 0;
	while (list)
	{
		if (ft_strlen(list->name) > max_len)
			max_len = ft_strlen(list->name);
		list = list->next;
	}
	return (max_len + 1);
}

static void		print_spaces(int nbr_spaces)
{
	int		i;

	i = 0;
	while (i < nbr_spaces)
	{
		ft_putchar(' ');
		i++;
	}
}

static int		finish_line(t_list *list, int spaces)
{
	ft_putendl("");
	ft_putstr(list->name);
	print_spaces(spaces);
	return (1);
}

static int		*get_lines_n_col(int *coords, t_list *list, int spaces, int *i)
{
	if (*i < coords[0])
	{
		ft_putstr(list->name);
		if (coords[2] == 1)
			coords[3]++;
		if (*i + 1 < coords[0])
			print_spaces(spaces);
		(*i)++;
	}
	else
	{
		*i = finish_line(list, spaces);
		coords[2] += 1;
	}
	return (coords);
}

int				*print_list(t_list *list)
{
	int		spaces;
	int		*coords;
	int		i;

	coords = malloc(sizeof(int) * 4);
	coords[1] = count_len(list);
	coords[0] = get_term_size(1) / coords[1];
	coords[2] = 1;
	coords[3] = 0;
	i = 0;
	while (list)
	{
		spaces = coords[1] - ft_strlen(list->name);
		coords = get_lines_n_col(coords, list, spaces, &i);
		list = list->next;
	}
	ft_putendl("");
	return (coords);
}
