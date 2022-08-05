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

int		get_min_idx(t_swap *stack)
{
	int	i;
	int	arg;

	arg = stack->array[stack->capacity - 1];
	i = stack->capacity - 1;
	while (i--)
		if (arg > (stack->array[i]))
			arg = stack->array[i];
	return (i);
}

int		get_max_idx(t_swap *stack)
{
	int	i;
	int	arg;

	arg = stack->array[stack->capacity - 1];
	i = stack->capacity - 1;
	while (i--)
		if (arg < (stack->array[i]))
			arg = stack->array[i];
	return (i);
}

void	indexing(t_swap *stack)
{
    unsigned	i;
    unsigned	j;
    char		*sorted;

    sorted = pre_sort(stack);
    i = 0;
    while (i < stack->capacity)
    {
        j = 0;
        while (j < ft_strlen(sorted))
        {
            if (stack->array[i] == sorted[j])
                stack->array[i] = j;
            j++;
        }
        i++;
    }
    free(sorted);
}
