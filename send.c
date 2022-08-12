/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:31:21 by afakili           #+#    #+#             */
/*   Updated: 2022/08/13 00:45:40 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_small_send_b(t_swap *stack_1, t_swap *stack_2)
{
	int	pivot;
	int	i;

	i = 0;
	pivot = find_pivot(stack_1);
	if (stack_1->capacity < 3)
		return ;
	while (i < stack_1->capacity)
	{
		if (stack_1->array[stack_1->capacity - 1] <= pivot)
			push(stack_1, stack_2, 0);
		else
			rotate(stack_1, 0);
		i++;
	}
	if_small_send_b(stack_1, stack_2);
}

void	send_to_a(t_swap *stack_1, t_swap *stack_2, int idx_a, int idx_b)
{
	rot_together_st(stack_1, stack_2, &idx_a, &idx_b);
	if (idx_a < (stack_1->capacity / 2))
		while (idx_a-- > 0)
			rotate(stack_1, 0);
	else
		while (idx_a++ < stack_1->capacity)
			reverse_rotate(stack_1, 0);
	if (idx_b < (stack_2->capacity / 2))
		while (idx_b-- > 0)
			rotate(stack_2, 0);
	else
		while (idx_b++ < stack_2->capacity)
			reverse_rotate(stack_2, 0);
	push(stack_2, stack_1, 0);
}
