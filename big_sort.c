/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:32:51 by afakili           #+#    #+#             */
/*   Updated: 2022/08/05 20:32:51 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_pivot(t_swap *stack)
{
    unsigned i;
    long min = stack->array[0];
    long max = stack->array[0];

    i = 1;
    while (i < stack->capacity)
    {
        if (stack->array[stack->capacity - i] < min)
            min = stack->array[stack->capacity - i];
        else if (stack->array[stack->capacity - i] > max)
            max = stack->array[stack->capacity - i];
        i++;
    }
    return ((min + max) / 2);
}

void    if_small_send_b(t_swap *stack_1, t_swap *stack_2)
{
    int pivot;
    int i;

    i = 0;
    pivot = find_pivot(stack_1);
    while (i < stack_1->capacity)
    {
        if (stack_1->array[stack_1->capacity - 1] <= pivot)
            push(stack_1, stack_2);
        else
            rotate(stack_1);
        i++;
    }
}

//Finds the best sorting.
void    best_route(t_swap *stack_1, t_swap *stack_2)
{
    int min;
    int a;
    int b;

    min = INT_MAX;
    while (a < stack_2->capacity)
    {
        b = best_index(stack_1, stack_2->array[stack_2->capacity - 1 - a]);

        a++;
    }

}

//Main sort function
void	big_sort(t_swap *stack_1, t_swap *stack_2)
{
    

    if_small_send_b(stack_1, stack_2);
    

}

