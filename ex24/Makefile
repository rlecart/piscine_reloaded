# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlecart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 22:11:13 by rlecart           #+#    #+#              #
#    Updated: 2016/11/07 23:48:36 by rlecart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FILE	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC		=	$(addprefix srcs/,$(FILE))
OBJ		=	$(FILE:.c=.o)
FLAGS	=	-Werror -Wextra -Wall
CC		=	gcc
AR		=	ar rc

all:
	$(CC) $(FLAGS) -c $(SRC) -I includes/
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
