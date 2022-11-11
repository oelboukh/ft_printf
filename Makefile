# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 22:14:54 by oelboukh          #+#    #+#              #
#    Updated: 2022/11/06 15:58:47 by oelboukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unbr.c print_format.c  printhex.c ft_uphex.c print_add.c

OBJ = $(FILES:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	
re: fclean clean all
