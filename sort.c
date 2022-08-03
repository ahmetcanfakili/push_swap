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

void	two_arg_sort(t_swap *stack)
{
	if (stack->array[1] > stack->array[0])
		swap(stack);
}

void	three_arg_sort(t_swap *stack)
{

}

void	four_arg_sort(t_swap *stack_1, t_swap *stack_2)
{

}

void	five_arg_sort(t_swap *stack_1, t_swap *stack_2)
{

}




void	big_sort()
{


}

void	check_sorted(t_swap *stack)
{
	unsigned	i;

	i = 0;
	while (i < stack->capacity - 1)
	{
		if (stack->array[i] > stack->array[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}