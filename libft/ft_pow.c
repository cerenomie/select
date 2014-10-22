/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:24:23 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 11:49:41 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, unsigned int p)
{
	int		buffer;

	if (p == 0)
		return (1);
	buffer = nb;
	while (p > 1)
	{
		buffer = buffer * nb;
		p--;
	}
	return (buffer);
}
