/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:24:41 by fteuber           #+#    #+#             */
/*   Updated: 2014/01/10 15:38:21 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_string_c(char *str, int len, char arg)
{
	char	*s1;
	char	*s2;
	char	*c;

	c = malloc(sizeof(char) * 2);
	c[0] = arg;
	c[1] = '\0';
	s1 = ft_strsub(str, 0, len);
	s2 = ft_strsub(str, len + 2, ft_strlen(str) - len - 2);
	s1 = ft_strjoin(s1, c);
	s2 = ft_strjoin(s1, s2);
	return (s2);
}

static char	*new_string(char *str, int len, char *arg)
{
	char	*s1;
	char	*s2;

	s1 = ft_strsub(str, 0, len);
	s2 = ft_strsub(str, len + 2, ft_strlen(str) - len - 2);
	s1 = ft_strjoin(s1, arg);
	s2 = ft_strjoin(s1, s2);
	return (s2);
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*str;
	int		i;

	str = ft_strdup(format);
	va_start(ap, format);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
				str = new_string(str, i, va_arg(ap, char *));
			else if (str[i + 1] == 'c')
				str = new_string_c(str, i, va_arg(ap, int));
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				str = new_string(str, i, ft_itoa(va_arg(ap, int)));
		}
		i++;
	}
	va_end(ap);
	ft_putstr(str);
	return (ft_strlen(str));
}
