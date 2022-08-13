/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:36:19 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 16:36:19 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted(t_swap *stack_1, t_swap *stack_2)
{
	int	control;
	int	i;

	control = 1;
	i = -1;
	while (++i < stack_1->capacity - 1)
		if (stack_1->array[i] < stack_1->array[i + 1])
			control = 0;
	if (control == 1)
		free_func(stack_1, stack_2);
}

void	check_dup(t_swap *stack_1, t_swap *stack_2)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_1->capacity)
	{
		j = i;
		while (j < stack_1->capacity - 1)
		{
			if (stack_1->array[i] == stack_1->array[j++ + 1])
				error(stack_1, stack_2);
		}
		i++;
	}
}
