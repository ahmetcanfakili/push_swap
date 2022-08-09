/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:13:53 by afakili           #+#    #+#             */
/*   Updated: 2022/08/09 15:13:53 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_swap *stack_1, t_swap *stack_2)
{
	ft_printf("Error!\n");
	free(stack_1->array);
	free(stack_2->array);
	exit(1);
}

void	error_2(void)
{
	ft_printf("Error!\n");
	exit(1);
}
