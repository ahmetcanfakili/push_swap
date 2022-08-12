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

void	small_sort(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->capacity == 2)
		two_arg_sort(stack_1);
	else if (stack_1->capacity == 3)
		three_arg_sort(stack_1, stack_2);
	else if (stack_1->capacity == 4)
		four_arg_sort(stack_1, stack_2);
	else if (stack_1->capacity == 5)
		five_arg_sort(stack_1, stack_2);
}

void	five_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	int	i;

	i = 0;
	if (stack_1->array[stack_1->capacity - 1] == 3)
		push(stack_1, stack_2, 0);
	while (stack_1->array[i] != 4)
		i++;
	i++;
	five_arg_helper(stack_1, stack_2, i);
	push(stack_1, stack_2, 0);
	four_arg_sort(stack_1, stack_2);
	push(stack_2, stack_1, 0);
	rotate(stack_1, 0);
}

void	five_arg_helper(t_swap *stack_1, t_swap *stack_2, int i)
{
	if (i < 2)
	{
		while (--i >= 0)
		{
			reverse_rotate(stack_1, 0);
			if (stack_1->array[stack_1->capacity - 1] == 3)
				push(stack_1, stack_2, 0);
		}
	}
	else
	{
		while (i++ < stack_1->capacity)
		{
			rotate(stack_1, 0);
			if (stack_1->array[stack_1->capacity - 1] == 3)
				push(stack_1, stack_2, 0);
		}
	}
}

void	four_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	int	i;

	i = 0;
	if (stack_1->capacity == 4)
	{
		while (stack_1->array[i] != 3)
			i++;
		if (i == 0)
			reverse_rotate(stack_1, 0);
		else
			while (++i < stack_1->capacity)
				rotate(stack_1, 0);
		push(stack_1, stack_2, 0);
		three_arg_sort(stack_1, stack_2);
		push(stack_2, stack_1, 0);
		rotate(stack_1, 0);
	}
	else
	{
		if (stack_2->array[stack_2->capacity - 1] > stack_2->array[stack_2->capacity - 2])
			swap(stack_2, 0);
		three_arg_sort(stack_1, stack_2);
		push(stack_2, stack_1, 0);
		rotate(stack_1, 0);
	}
}

void	three_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->array[stack_1->capacity - 1] == 0)
	{
		if (stack_1->array[stack_1->capacity - 2] == 2)
		{
			push(stack_1, stack_2, 0);
			if (stack_1->array[stack_1->capacity - 1] > stack_1->array[stack_1->capacity - 2])
				swap(stack_1, 0);
			push(stack_2, stack_1, 0);
		}
	}
	else if (stack_1->array[stack_1->capacity - 2] == 0)
	{
		if (stack_1->array[stack_1->capacity - 1] == 2)
			rotate(stack_1, 0);
		else if (stack_1->array[stack_1->capacity - 1] == 1)
			swap(stack_1, 0);
	}
	else if (stack_1->array[stack_1->capacity - 3] == 0)
	{
		if (stack_1->array[stack_1->capacity - 1] > stack_1->array[stack_1->capacity - 2])
			swap(stack_1, 0);
		reverse_rotate(stack_1, 0);
	}
}

void	two_arg_sort(t_swap *stack)
{
	if (stack->array[stack->capacity - 1] > stack->array[stack->capacity - 2])
		swap(stack, 0);
}
