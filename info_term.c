/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_term.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 19:50:19 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 19:50:23 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_select.h>
#include <sys/ioctl.h>

int		get_term_size(int select)
{
	struct winsize		term_size;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &term_size);
	if (select == 1)
		return (term_size.ws_col);
	else if (select == 0)
		return (term_size.ws_row);
	else
		return (-1);
}
