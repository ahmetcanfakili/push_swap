/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:41:18 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 14:41:18 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_v2(char *str, t_swap *stack_1, t_swap *stack_2)
{
	int		i;
	long	res;
	int		neg;

	i = 0;
	neg = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			error(stack_1, stack_2);
		res = (res * 10) + str[i++] - '0';
		if ((res * neg) > INT_MAX || (res * neg) < INT_MIN)
			error(stack_1, stack_2);
	}
	return ((int)res * neg);
}
