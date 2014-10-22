/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 11:56:43 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 11:57:21 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *result;

	if (s == NULL)
		return (NULL);
	result = ft_strnew(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strncpy(result, &s[start], len);
	return (result);
}
