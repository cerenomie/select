/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrow_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 12:01:02 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 12:01:13 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	ft_arrow_left(int **index, int *coords)
{
	int		i;

	if (*index[0] > (1 + coords[3] * (*index[1] - 1)))
	{
		i = 0;
		while (i < coords[1])
		{
			tputs(tgetstr("le", NULL), 1, tputs_putchar);
			i++;
		}
		*index[2] -= 1;
		*index[0] -= 1;
	}
}
