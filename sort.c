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
