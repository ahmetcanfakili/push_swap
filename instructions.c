/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:45:42 by afakili           #+#    #+#             */
/*   Updated: 2022/08/13 18:10:04 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_swap *stack_1, t_swap *stack_2, int type)
{
	if (stack_1->capacity < 1)
		ft_printf("Error!\n");
	stack_2->array[stack_2->capacity] = stack_1->array[stack_1->capacity - 1];
	stack_2->capacity++;
	stack_1->capacity--;
	if (!type)
	{
		if (stack_1->id == 'a')
			ft_printf("pb\n");
		else
			ft_printf("pa\n");
	}
}

void	swap(t_swap *stack, int type)
{
	int	tmp;

	if (stack->capacity < 2)
		ft_printf("Error!\n");
	tmp = stack->array[stack->capacity - 1];
	stack->array[stack->capacity - 1] = stack->array[stack->capacity - 2];
	stack->array[stack->capacity - 2] = tmp;
	if (!type)
	{
		if (stack->id == 'a')
			ft_printf("sa\n");
		else
			ft_printf("sb\n");
	}
}

void	rotate(t_swap *stack, int type)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->array[stack->capacity - 1];
	while (++i < stack->capacity - 1)
		stack->array[stack->capacity - 1 - i] = \
			stack->array[stack->capacity - 2 - i];
	stack->array[0] = tmp;
	if (!type)
	{
		if (stack->id == 'a')
			ft_printf("ra\n");
		else
			ft_printf("rb\n");
	}
}
