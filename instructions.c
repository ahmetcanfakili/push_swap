/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:45:42 by afakili           #+#    #+#             */
/*   Updated: 2022/08/10 22:11:51 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_swap *stack)
{
	int	tmp;

	if (stack->capacity > 1)
	{
		tmp = stack->array[stack->capacity - 1];
		stack->array[stack->capacity - 1] = stack->array[stack->capacity - 2];
		stack->array[stack->capacity - 2] = tmp;
	}
	else
		return (0);
	if (stack->id = 'a')
		printf("sa\n");
	else
		printf("sb\n");
}

int	push(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->capacity > 0 || stack_2->capacity > 0)
	{
		stack_2->array[stack_2->capacity] = \
			stack_1->array[--stack_1->capacity - 1];
		stack_2->capacity++;
		stack_1->capacity--;
	}
	else
		return (0);
	if (stack_1->id = 'b')
		printf("pa\n");
	else
		printf("pb\n");
}

void	rotate(t_swap *stack)
{
	int				tmp;
	unsigned int	i;

	i = 1;
	tmp = stack->array[stack->capacity - 1];
	while (i < stack->capacity)
	{
		stack->array[stack->capacity - i] = \
			stack->array[stack->capacity - 1 - i];
		i++;
	}
	stack->array[0] = tmp;
	if (stack->id = 'a')
		printf("ra\n");
	else
		printf("rb\n");
}
