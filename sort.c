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

char *pre_sort(t_swap *stack)
{
	unsigned i;
	unsigned j;
	char *tmp;
	int tmp_2;

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

void indexing(t_swap *stack)
{
    unsigned i;
    unsigned j;
    char *sorted;

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
