CFLAGSS = -Wall -Wextra -Werror
SRCS = args.c check.c ft_atoi_v2.c instructions.c main.c sort.c stack.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = utils/libft/libft.a

