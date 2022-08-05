/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:12:15 by afakili           #+#    #+#             */
/*   Updated: 2022/08/05 20:12:15 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_arg_sort(t_swap *stack)
{
	if (stack->array[1] > stack->array[0])
		swap(stack);
}

void	three_arg_sort(t_swap *stack)
{
	if (stack->array[2] > stack->array[1] && stack->array[2] > stack->array[0])
	{
		rotate(stack);
		if (stack->array[1] < stack->array[2])
			swap(stack);
	}
	else if (stack->array[1] > stack->array[0] && stack->array[1] > stack->array[2])
	{
		reverse_rotate(stack);
		if (stack->array[1] < stack->array[2])
			swap(stack);
	}
	else if (stack->array[0] > stack->array[1] && stack->array[0] > stack->array[2])
		swap(stack);
}

void	four_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	unsigned	min_idx;
	int			is_sorted;

	min_idx = get_min_idx(stack_1);
	move_top(stack_1, min_idx);
	push(stack_1, stack_2);
	three_arg_sort(stack_1);
	push(stack_2, stack_1);
}

void	five_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	push(stack_1, stack_2);
	push(stack_1, stack_2);
	three_arg_sort(stack_1);
	if (stack_2->array[1] < stack_2->array[0])
		swap(stack_2);
	push(stack_2, stack_1);
	push(stack_2, stack_1);
}

void	small_sort(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->capacity == 2)
		two_arg_sort(stack_1);
	else if (stack_1->capacity == 3)
		three_args_sort(stack_1);
	else if (stack_1->capacity == 4)
		four_args_sort(stack_1, stack_2);
	else if (stack_1->capacity == 5)
		five_arg_sort(stack_1, stack_2);
}