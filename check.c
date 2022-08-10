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

void	check_dup(t_swap *stack_1, t_swap *stack_2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < stack_1->capacity)
	{
		j = i + 1;
		while (j < stack_1->capacity)
		{
			if (stack_1->array[i] == stack_1->array[j])
				error(stack_1, stack_2);
			j++;
		}
		i++;
	}
}

void	check_sorted(t_swap *stack_1, t_swap *stack_2)
{
	unsigned int	control;
	unsigned int	i;

	control = 1;
	i = 0;
	while (i < stack_1->capacity - 1)
	{
		if (stack_1->array[i] < stack_1->array[i + 1])
			control = 0;
		i++;
	}
	if (control == 1)
		free_func(stack_1, stack_2);
}

void	check_split(char **split_str)
{
	int		i;
	int		j;
	char	*str;

	if (!split_str[0])
		error_2();
	i = 0;
	while (split_str[i])
	{
		str = split_str[i];
		j = 0;
		if (str[j] == '+' || str[j] == '-')
			j++;
		if (!str[j])
			error_2();
		while (str[j])
		{
			if (!ft_isdigit(str[j]))
				error_2();
			j++;
		}
		i++;
	}
}

void	check_numbers(char **split_str)
{
	int			i;
	long long	num;

	i = 0;
	while (split_str[i])
	{
		num = ft_atoi_v2(split_str[i]);
		if (num > INT_MAX || num < INT_MIN)
			error_2();
		i++;
	}
}
