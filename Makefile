CFLAGSS = -Wall -Wextra -Werror
SRCS = args.c big_sort.c check.c ft_atoi_v2.c index.c instructions.c main.c small_sort.c sort.c stack.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = utils/libft/libft.a

