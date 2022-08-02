/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:25:02 by afakili           #+#    #+#             */
/*   Updated: 2022/08/01 18:25:02 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_swap a;
	t_swap b;

	a.id = 'a';
	b.id = 'b';
	if (argc >= 2)
		create_stack(argc, argv, &a, &b);
	else
		return (0);
	free(a.array);
	free(b.array);
	return (0);
}

char **read_args(int argc, char **argv)
{
	char *str;
	char **split_str;
	unsigned idx;

	idx = 1;
	str = "";
	while (argv[idx])
	{
		str = ft_strjoin(str, argv[idx]);
		str = ft_strjoin(str, " ");
		idx++;
	}
	split_str = ft_split(str, " ");
	free(str);
	return (split_str);
}

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