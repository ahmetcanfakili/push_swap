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

void    check_dup(t_swap *stack)
{
    unsigned    i;
    unsigned    j;

    i = 0;
    j = i + 1;
    while (i < stack->capacity)
    {
        j = i + 1;
        while (j < stack->capacity)
        {
            if (stack->array[i] == stack->array[j])
            {
                printf("Error!");
                free(stack->array);
            }
            j++;
        }
        i++;
    }
}

int		check_sorted(t_swap *stack)
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

int	is_valid_arg(char *arg)
{
	while (*arg)
	{
		if (!ft_isdigit(*arg) && *arg != '-' && !is_space(*arg) && *arg != '+')
			return (0);
		arg++;
	}
	return (1);
}