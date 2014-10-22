/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:31:56 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 10:30:42 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(*str) * (ft_strlen(s1)) + 1);
	while (i < (ft_strlen(s1) + 1))
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
