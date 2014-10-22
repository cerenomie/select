/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:30:31 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 10:31:58 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char*)s;
	while (i < ft_strlen(str) + 1)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}
