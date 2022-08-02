/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:08:48 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 16:08:48 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void create_stack(int argc, char **argv, t_swap *stack_1, t_swap *stack_2)
{
	unsigned i;
	char **string;

	i = 0;
	string = read_args(argc, argv);
	while (string[i])
		i++;	
	stack_1->capacity = i;
	stack_2->capacity = 0;
	stack_1->array = (int *)malloc(sizeof(int) * stack_1->capacity);
	stack_2->array = (int *)malloc(sizeof(int) * stack_1->capacity);
	i = 0;
	while (string[i])
	{
		stack_1->array[stack_1->capacity - 1 - i] = ft_atoi_v2(string[i]); 
		i++;
	}
	free(string);
}
