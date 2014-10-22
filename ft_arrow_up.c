/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrow_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 12:01:52 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 12:02:03 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	ft_arrow_up(int **index, int *coords)
{
	if (*index[1] > 1)
	{
		tputs(tgetstr("up", NULL), 1, tputs_putchar);
		*index[1] -= 1;
		*index[0] = *index[0] - coords[3];
	}
}
