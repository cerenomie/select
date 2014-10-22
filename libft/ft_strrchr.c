/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:36:07 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 10:33:57 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	if (s == NULL || s[0] == '\0')
		return (NULL);
	str = (char*)s;
	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return (&str[i]);
	}
	return (NULL);
}
