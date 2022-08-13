/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:11:32 by afakili           #+#    #+#             */
/*   Updated: 2022/08/13 17:09:01 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_swap *stack_1, t_swap *stack_2, int type)
{
	if (!type)
	{
		swap(stack_1, 1);
		swap(stack_2, 1);
		ft_printf("ss\n");
	}
}

void	rr(t_swap *stack_1, t_swap *stack_2, int type)
{
	if (!type)
	{
		rotate(stack_1, 1);
		rotate(stack_2, 1);
		ft_printf("rr\n");
	}	
}

void	reverse_rotate(t_swap *stack, int type)
{
	int	i;
	int				tmp;

	i = -1;
	tmp = stack->array[0];
	while (++i < stack->capacity - 1)
		stack->array[i] = stack->array[i + 1];
	stack->array[stack->capacity - 1] = tmp;
	if (!type)
	{
		if (stack->id == 'a')
			ft_printf("rra\n");
		else
			ft_printf("rrb\n");
	}
}

void	rrr(t_swap *stack_1, t_swap *stack_2, int type)
{
	if (!type)
	{
		reverse_rotate(stack_1, 1);
		reverse_rotate(stack_2, 1);
		ft_printf("rrr\n");
	}	
}
