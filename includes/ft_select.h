/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:17:22 by fteuber           #+#    #+#             */
/*   Updated: 2014/10/15 14:44:06 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include <unistd.h>
# include <termios.h>
# include <termcap.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct		s_list
{
	int				index;
	int				select;
	char			*name;
	struct s_list	*next;
}					t_list;

int					set_index(t_list *list);
int					*print_list(t_list *list);
void				select_list(t_list *list, int index);
t_list				*make_cycle_list(t_list *list);
int					del_list(t_list *list, int index);
t_list				*add_list(t_list *list, char *name);
void				ft_init_prog(t_list *list, int max_elem);
void				ft_arrow_all(int **index, int *coords, int max_elem,
		char *buf);
void				ft_arrow_up(int **index, int *coords);
void				ft_arrow_down(int **index, int *coords, int max_elem);
void				ft_arrow_left(int **index, int *coords);
void				ft_arrow_right(int **index, int *coords, int max_elem);
void				ft_signal(int n);
void				send_selected(t_list *list);
int					get_term_size(int select);
int					tputs_putchar(int c);
void			ft_init_prog_deleg(t_list *list, int *index, int *coords,
		int max_elem);

#endif
