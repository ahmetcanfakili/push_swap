/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:05:26 by afakili           #+#    #+#             */
/*   Updated: 2022/08/01 19:43:37 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include "utils/ft_printf/ft_printf.h"
#include "utils/get_next_line/get_next_line.h"
#include "utils/libft/libft.h"

typedef struct s_swap {
    int id;
    unsigned capacity;
    int* array;
} t_swap;

void swap(t_swap *stack);
void ss(t_swap *stack_1, t_swap *stack_2);
void push(t_swap *stack_1, t_swap *stack_2);
void rotate(t_swap *stack);
void rr(t_swap *stack_1, t_swap *stack_2);
void reverse_rotate(t_swap *stack);
void rrr(t_swap *stack_1, t_swap *stack_2);




#endif