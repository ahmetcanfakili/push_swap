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
	t_swap	a;
	t_swap	b;

	a.id = 'a';
	b.id = 'b';
	if (argc >= 2)
		create_stack(argc, argv, &a, &b);
	else
		return (0);
	check_dup(&a);
	indexing(&a);
	check_sorted(&a);
	sort(&a, &b);
	free(a.array);
	free(b.array);
	return (0);
}
