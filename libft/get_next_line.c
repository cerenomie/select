/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 12:07:36 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/14 15:52:26 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static void		get_next_line_ret(char **line, char **str)
{
	size_t		length;
	char		*tmp;

	length = ft_strchr(*str, '\n') - *str;
	*line = ft_strsub(*str, 0, length);
	tmp = *str;
	*str = ft_strsub(tmp, length + 1, ft_strlen(tmp) - length - 1);
	free(tmp);
}

int				get_next_line_end(char *str, char **line)
{
	*line = ft_strdup(str);
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];
	static char	*str;
	char		*tmp;

	if (fd == -1 || BUFF_SIZE <= 0)
		return (-1);
	if (str == NULL && (str = ft_strnew(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while (str != NULL && ft_strchr(str, '\n') == NULL
			&& (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = str;
		str = ft_strjoin(str, buf);
		free(tmp);
	}
	if (ret == -1)
		return (-1);
	if (ret == 0 && ft_strchr(str, '\n') == NULL)
		return (get_next_line_end(str, line));
	get_next_line_ret(line, &str);
	return (1);
}
