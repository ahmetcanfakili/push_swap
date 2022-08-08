/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:57:30 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 18:57:30 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*pre_sort(t_swap *stack)
{
	unsigned	i;
	unsigned	j;
	char		*tmp;
	int			tmp_2;

	i = 0;
	while (i < stack->capacity)
	{
		tmp[i] = stack->array[i];
		i++;
	}
	i = 0;
	while (i < stack->capacity)
	{	
		j = i + 1;
		while (j < stack->capacity)
		{
			if (tmp[i] > tmp[j])
			{
				tmp_2 = tmp[j];
				tmp[j] = tmp[i];
				tmp[i] = tmp_2;	
			}
			j++;
		}
		i++;
	}
	return (tmp);
}

void	move_top(t_swap *stack, int idx)
{
	int	min_arg;

	min_arg = stack->array[idx];
	while (min_arg != stack->array[stack->capacity - 1])
		rotate(stack);
}

void	sort(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->capacity >= 2 && stack_1->capacity <= 5)
		small_sort(&stack_1, &stack_2);
	else
		big_sort(&stack_1, &stack_2);
}