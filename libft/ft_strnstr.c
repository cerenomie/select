/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:35:57 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 10:47:55 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*check_str_n(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ptr;

	i = 0;
	j = 0;
	while (i < n && s1[i])
	{
		while (i < n && s1[i] != s2[j] && s1[i])
			i++;
		ptr = i;
		while (i < n && s1[i] == s2[j] && s1[i])
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char*)&s1[ptr]);
		ptr = 0;
		j = 0;
	}
	return (NULL);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (s2 == NULL || s1 == NULL)
		return (NULL);
	if (s2[0] == '\0')
		return ((char*)s1);
	return (check_str_n(s1, s2, n));
}
