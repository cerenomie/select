/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:33:43 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 11:55:44 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	str = malloc(sizeof(*str) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		str[i] = (*f)(str[i]);
		i++;
	}
	return (str);
}
