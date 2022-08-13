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

void	sort(t_swap *stack_1, t_swap *stack_2)
{
	if (stack_1->capacity > 5)
		big_sort(stack_1, stack_2);
	else
		small_sort(stack_1, stack_2);
}

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

int	*pre_sort(t_swap *stack)
{
	int	i;
	int	j;
	int	*tmp;
	int	tmp_2;

	tmp = malloc(sizeof(int) * stack->capacity);
	i = -1;
	while (++i < stack->capacity)
		tmp[i] = stack->array[i];
	i = -1;
	while (++i < stack->capacity)
	{	
		j = i - 1;
		while (++j < stack->capacity)
		{
			if (tmp[i] > tmp[j])
			{
				tmp_2 = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = tmp_2;
			}
		}
	}
	return (tmp);
}
