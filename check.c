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

