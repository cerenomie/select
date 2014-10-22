/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_selected.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 19:52:07 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/20 14:49:19 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

void	send_selected(t_list *list)
{
	while (list)
	{
		if (list->select == 1)
		{
			ft_putstr(list->name);
			ft_putchar(' ');
		}
		list = list->next;
	}
}
