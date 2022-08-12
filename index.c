/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:13:40 by afakili           #+#    #+#             */
/*   Updated: 2022/08/05 20:13:40 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_idx_or_value(t_swap *stack, int type)
{
	int	idx;
	int	i;
	int	min;

	min = INT_MAX;
	i = 0;
	while (i < stack->capacity)
	{
		if (min > (stack->array[i]))
		{
			min = stack->array[i];
			idx = i;
		}
		i++;
	}
	if (type == 0)
		return (idx);
	else if (type == 1)
		return (min);
	return (0);
}

int	get_max_idx_or_value(t_swap *stack, int type)
{
	int	idx;
	int	i;
	int	max;

	max = INT_MIN;
	i = 0;
	while (i < stack->capacity)
	{
		if (max < (stack->array[i]))
		{
			max = stack->array[i];
			idx = i;
		}
		i++;
	}
	if (type == 0)
		return (idx);
	else if (type == 1)
		return (max);
	return (0);
}

void	indexing(t_swap *stack)
{
	int	i;
	int	j;
	int	*sorted;

	sorted = pre_sort(stack);
	i = 0;
	while (i < stack->capacity)
	{
		j = 0;
		while (j < stack->capacity)
		{
			if (stack->array[i] == sorted[j])
				stack->array[i] = j;
			j++;
		}
		i++;
	}
	free(sorted);
}

int	find_pos(t_swap *stack, int arg)
{
	int	i;
	int	pos;
	int	min;
	int	df;

	min = INT_MAX;
	i = 0;
	pos = -1;
	while (i < stack->capacity)
	{
		df = stack->array[stack->capacity - 1 - i] - arg;
		if (df > 0 && df < min)
		{
			min = df;
			pos = i;
		}
		i++;
	}
	if (pos == -1)
		pos = get_max_idx_or_value(stack, 0);
	return (pos);
}
