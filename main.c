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

int	main(int argc, char **argv)
{
	t_swap	a;
	t_swap	b;

	a.id = 'a';
	b.id = 'b';
	if (argc >= 2 && argc <= 1000)
		create_stack(argc, argv, &a, &b);
	else
		return (0);
	check_dup(&a, &b);
	check_sorted(&a, &b);
	indexing(&a);
	if (a.capacity > 5)
		big_sort(&a, &b);
	else
		small_sort(&a, &b);
	free(a.array);
	free(b.array);
	return (0);
}
