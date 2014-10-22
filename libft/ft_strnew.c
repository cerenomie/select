/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:35:48 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/09 15:35:48 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	unsigned int	i;
	char			*str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(*str) * (size + 1));
	str[size] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
