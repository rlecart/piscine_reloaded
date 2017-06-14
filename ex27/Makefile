# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlecart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 03:32:43 by rlecart           #+#    #+#              #
#    Updated: 2016/11/08 03:45:39 by rlecart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file
FILE	=	ft_display_file.c
SRC		=	$(addprefix ./,$(FILE))
OBJ		=	$(FILE:.c=.o)
FLAGS	=	-Werror -Wextra -Wall
CC		=	gcc

all:
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
