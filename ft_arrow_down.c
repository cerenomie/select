/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrow_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 11:59:42 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 12:00:26 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	ft_arrow_down(int **index, int *coords, int max_elem)
{
	int		i;
	int		j;

	if (*index[1] < coords[2] - 1 || (*index[1] == coords[2] - 1
				&& *index[0] + coords[3] < max_elem + 1))
	{
		tputs(tgetstr("do", NULL), 1, tputs_putchar);
		j = 0;
		while (j < *index[2] - 1)
		{
			i = 0;
			while (i < coords[1] * (*index[0] - 1))
			{
				tputs(tgetstr("nd", NULL), 1, tputs_putchar);
				i++;
			}
			j++;
		}
		*index[1] += 1;
		*index[0] += coords[1];
	}
}
