/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/14 15:49:49 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/15 14:43:50 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_select.h"

int			set_index(t_list *list, int max_elem)
{
	int		i;

	i = 1;
	while (i < max_elem + 1)
	{
		list->index = i;
		list = list->next;
		i++;
	}
	return (i - 1);
}

void		select_list(t_list *list, int index)
{
	while (list && list->next && list->index != index)
		list = list->next;
	if (list->select)
		list->select = 0;
	else
		list->select = 1;
}

t_list	*make_cycle_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = list;
	return (list);
}

int		del_list(t_list *list, int index)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = list;
	while (list->next && index != list->next->index)
		list = list->next;
	tmp = list->next;
	if (list->next)
	{
		list->next = list->next->next;
		free(tmp);
	}
	return (set_index(tmp2));
}

t_list		*add_list(t_list *list, char *name)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->select = 0;
		tmp->name = ft_strdup(name);
		tmp->next = list;
	}
	return (tmp);
}
