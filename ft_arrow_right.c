/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrow_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 12:01:23 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 12:01:37 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	ft_arrow_right(int **index, int *coords, int max_elem)
{
	int		i;

	if (*index[0] <= *index[1] * coords[3] - 1 && *index[0] < max_elem)
	{
		i = 0;
		while (i < coords[1])
		{
			tputs(tgetstr("nd", NULL), 1, tputs_putchar);
			i++;
		}
		*index[2] += 1;
		*index[0] += 1;
	}
}
