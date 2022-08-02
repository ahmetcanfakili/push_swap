/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:45:42 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 20:08:46 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_swap *stack)
{
    int tmp;

	if (stack->capacity < 2)
    {
        printf("Swap Cannot Be Made!\n");
        exit(1);
    }
    tmp = stack->array[stack->capacity - 1];
    stack->array[stack->capacity - 1] = stack->array[stack->capacity - 2];
    stack->array[stack->capacity - 2] = tmp;
    if (stack->id = 'a')
        printf("sa\n");
    else
        printf("sb\n");
}

void    ss(t_swap *stack_1, t_swap *stack_2)
{
	swap(stack_1);
	swap(stack_2);
    printf("ss\n");
}

void    push(t_swap *stack_1, t_swap *stack_2)
{
    if (stack_1->capacity < 1)
    {
        printf("Push Cannot Be Made!\n");
        exit(1);
    }
    stack_2->array[stack_2->capacity - 1] = stack_1->array[stack_1->capacity - 1];
    
}

void    rotate(t_swap *stack)
{
    int         tmp;
    unsigned    i;

    i = 1;
    tmp = stack->array[stack->capacity - 1];
    while (i < stack->capacity)
    {
        stack->array[stack->capacity - i] = stack->array[stack->capacity - 1 - i];
        i++;
    }
    stack->array[0] = tmp;
    if (stack->id = 'a')
        printf("ra\n");
    else
        printf("rb\n");
}

void    rr(t_swap *stack_1, t_swap *stack_2)
{
    rotate(stack_1);
    rotate(stack_2);
	printf("rr");
}

void    reverse_rotate(t_swap *stack)
{
    unsigned    i;
    int         tmp;

    i = 1;
    tmp = stack->array[0];
    while (i < stack->capacity)
    {
        stack->array[stack->capacity - 1 - i] = stack->array[stack->capacity - i];
        i++;   
    }
    stack->array[stack->capacity -1] = tmp;
    if (stack->id = 'a')
        printf("rra\n");
    else
        printf("rrb\n");
}

void    rrr(t_swap *stack_1, t_swap *stack_2)
{
    reverse_rotate(stack_1);
    reverse_rotate(stack_2);
	printf("rrr");
}
