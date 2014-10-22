#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fteuber <fteuber@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/09 16:01:16 by fteuber           #+#    #+#              #
#    Updated: 2014/01/11 15:57:12 by fteuber          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_select

SRC = main.c lists.c display.c ft_init_prog.c info_term.c send_selected.c \
	  ft_arrow_up.c ft_arrow_down.c ft_arrow_left.c ft_arrow_right.c \
	  ft_arrow_all.c ft_signal.c

OBJ = $(SRC:.c=.o)

LIB = libft/

SRCLIB = libft/includes

FLG = -Wall -Wextra -Werror -g

.PHONY: re all clean fclean

all: $(NAME)

$(NAME): libft/libft.a $(OBJ)
	gcc -o $(NAME) $(OBJ) -L$(LIB) -lft -I$(SRCLIB) -ltermcap 

libft/libft.a:
	@make -C $(LIB)

%.o: %.c
	gcc $(FLG) -I $(SRCLIB) -Iincludes -c $< -o $@

clean:
	rm -rf $(OBJ)
	@make clean -C $(LIB)

fclean: clean
	rm -rf $(NAME)
	@make fclean -C $(LIB)

re: fclean all

test:
	gcc -o test test.c -Wall -wextra -Werror -Llibft -ltermcap
