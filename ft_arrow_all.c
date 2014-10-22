/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrow_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 11:59:17 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 11:59:26 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	ft_arrow_all(int **index, int *coords, int max_elem, char *buf)
{
	if (buf[1] == 0 && buf[2] == 0)
		ft_signal(1);
	else if (buf[1] == 91)
	{
		if (buf[2] == 65)
			ft_arrow_up(index, coords);
		else if (buf[2] == 66)
			ft_arrow_down(index, coords, max_elem);
		else if (buf[2] == 67)
			ft_arrow_right(index, coords, max_elem);
		else if (buf[2] == 68)
			ft_arrow_left(index, coords);
	}
}
