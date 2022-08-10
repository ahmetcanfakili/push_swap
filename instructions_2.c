/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:11:32 by afakili           #+#    #+#             */
/*   Updated: 2022/08/10 22:12:12 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_swap *stack_1, t_swap *stack_2)
{
	swap(stack_1);
	swap(stack_2);
	printf("ss\n");
}

void	rr(t_swap *stack_1, t_swap *stack_2)
{
	rotate(stack_1);
	rotate(stack_2);
	printf("rr");
}

void	reverse_rotate(t_swap *stack)
{
	unsigned int	i;
	int				tmp;

	i = 1;
	tmp = stack->array[0];
	while (i < stack->capacity)
	{
		stack->array[stack->capacity - 1 - i] = \
			stack->array[stack->capacity - i];
		i++;
	}
	stack->array[stack->capacity -1] = tmp;
	if (stack->id = 'a')
		printf("rra\n");
	else
		printf("rrb\n");
}

void	rrr(t_swap *stack_1, t_swap *stack_2)
{
	reverse_rotate(stack_1);
	reverse_rotate(stack_2);
	printf("rrr");
}
