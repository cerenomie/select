/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:22:59 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/09 15:23:00 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*str1;
	const char		*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (s1);
}
