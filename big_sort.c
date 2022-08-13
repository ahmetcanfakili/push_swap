/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:32:51 by afakili           #+#    #+#             */
/*   Updated: 2022/08/05 20:32:51 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pivot(t_swap *stack)
{
	int	i;
	long			min;
	long			max;

	min = INT_MAX;
	max = INT_MIN;
	i = 0;
	while (i++ < stack->capacity)
	{
		if (stack->array[stack->capacity - i] < min)
			min = stack->array[stack->capacity - i];
		else if (stack->array[stack->capacity - i] > max)
			max = stack->array[stack->capacity - i];
	}
	return ((int)(min + max) / 2);
}

void	best_route(t_swap *stack_1, t_swap *stack_2, int *idx_a, int *idx_b)
{
	int	min;
	int	pos_b;
	int	pos_a;
	int	temp[2];

	min = INT_MAX;
	pos_b = -1;
	while (++pos_b < stack_2->capacity)
	{
		pos_a = find_pos(stack_1, stack_2->array[stack_2->capacity - 1 - pos_b]);
		if (pos_b < stack_2->capacity / 2)
			temp[0] = pos_b;
		else
			temp[0] = stack_2->capacity - pos_b - 1;
		if (pos_a < stack_1->capacity / 2)
			temp[1] = pos_a;
		else
			temp[1] = stack_1->capacity - pos_a - 1;
		if (temp[0] + temp[1] < min)
		{
			min = temp[0] + temp[1];
			*idx_b = pos_b;
			*idx_a = pos_a;
		}
	}
}

void	rot_together_st(t_swap *st_1, t_swap *st_2, int *idx_a, int *idx_b)
{
	if (*idx_a < (st_1->capacity / 2) && *idx_b < (st_2->capacity / 2))
	{
		while (*idx_a > 0 && *idx_b > 0)
		{
			rr(st_1, st_2, 0);
			*idx_a -= 1;
			*idx_b -= 1;
		}
	}
	else if (*idx_a >= (st_1->capacity / 2) && *idx_b >= (st_2->capacity / 2))
	{
		while (*idx_a < st_1->capacity && *idx_b < st_2->capacity && *idx_a != 0 && *idx_b != 0)
		{
			rrr(st_1, st_2, 0);
			*idx_a += 1;
			*idx_b += 1;
		}
	}
}

void	find_zero_and_sort(t_swap *stack)
{
	int	i;

	i = 0;
	while (stack->array[i] != 0)
		i++;
	if (i++ < stack->capacity / 2)
		while (i--)
			reverse_rotate(stack, 0);
	else
		while (i++ < stack->capacity)
			rotate(stack, 0);
}

void	big_sort(t_swap *stack_1, t_swap *stack_2)
{
	int	idx_a;
	int	idx_b;

	if_small_send_b(stack_1, stack_2);
	while (stack_2->capacity)
	{
		if (stack_1->capacity <= 1)
			push(stack_2, stack_1, 0);
		best_route(stack_1, stack_2, &idx_a, &idx_b);
		send_to_a(stack_1, stack_2, idx_a, idx_b);
	}
	find_zero_and_sort(stack_1);
}
