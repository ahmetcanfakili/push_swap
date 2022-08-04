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

int	get_max_idx(t_swap *stack)
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

int	get_min_idx(t_swap *stack)
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

void	three_arg_sort(t_swap *stack)
{
	int max_idx;
	int is_sorted;

	max_idx = get_max_idx(stack);

	if (max_idx == 2)
	{
		rotate(stack);
		is_sorted = check_sorted(stack);
		if (is_sorted == 1)
			swap(stack);
	}

	else if (is_sorted == 1)
	{
		is_sorted = NULL;
		reverse_rotate(stack);
		is_sorted = check_sorted(stack);
		if (is_sorted == 1)
			swap(stack);
	}

	else
	{
		is_sorted = NULL;
		is_sorted = check_sorted(stack);
		if (is_sorted == 1)
			swap(stack);
	}	
}

void	four_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	unsigned min_idx;
	int tmp;
	int is_sorted;

	min_idx = get_min_idx(stack_1);
	tmp = stack_1->array[stack_1->capacity - 1];
	stack_1->array[stack_1->capacity - 1] = stack_1->array[min_idx];
	stack_1->array[min_idx] = tmp;
	push(stack_1, stack_2);
	three_arg_sort(stack_1);
	push(stack_2, stack_1);
}

void	five_arg_sort(t_swap *stack_1, t_swap *stack_2)
{
	push(stack_1, stack_2);
	push(stack_1, stack_2);
	three_arg_sort(stack_1);
	if (stack_2->array[1] < stack_2->array[0])
		swap(stack_2);
	push(stack_2, stack_1);
	push(stack_2, stack_1);
}

void	big_sort()
{
	//if (argc > 5)
		//functions
}

int	check_sorted(t_swap *stack)
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

void sort()
{
	if ()
	{

	}

	else
	{

	}
}