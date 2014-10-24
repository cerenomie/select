/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 15:44:28 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/15 14:42:46 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

int			main(int argc, char **argv)
{
	t_list	*list;
	int		max_elem;

	if (argc == 1)
		return (0);
	list = NULL;
	max_elem = argc - 1;
	while (argc > 1)
	{
		list = add_list(list, argv[argc - 1]);
		argc--;
	}
	set_index(list, max_elem);
	list = make_cycle_list(list);
	return (0);
}
