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

int		get_min_idx_or_value(t_swap *stack, int type)
{
    int idx;
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
}

int		get_max_idx_or_value(t_swap *stack, int type)
{
    int idx;
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

//B’deki değerin A’da gelebilecek en iyi yeri bulan fonksiyon
int     best_index(t_swap *stack, int arg)
{
    int i;
    int idx;
    int min;
    int df;
    
    min = INT_MAX;
    i = 0;
    idx = -1;
    while (i < stack->capacity)
    {
        df = stack->array[stack->capacity - 1 - i] - arg;    
        if (df > 0 && df < min)
        {
            min = df;
            idx = i;
        }
        i++;
    }
    if (idx == -1)
        idx = get_max_idx_or_value(stack, 0);
    return (idx);
}
