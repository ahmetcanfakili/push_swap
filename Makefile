# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 19:12:45 by afakili           #+#    #+#              #
#    Updated: 2022/08/08 19:12:45 by afakili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = args.c big_sort.c check.c error.c free.c ft_atoi_v2.c index.c instructions_2.c instructions.c main.c send.c small_sort.c sort.c stack.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	make -C utils/ft_printf
	make -C utils/libft
	$(CC) $(CFLAGS) $(SRCS) utils/ft_printf/libftprintf.a -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)
	make -C utils/ft_printf clean
	make -C utils/libft clean

fclean: clean
	rm -rf $(OBJ) $(NAME)
	make -C utils/ft_printf fclean
	make -C utils/libft fclean

re: fclean all

.PHONY: all re clean fclean