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



//2 3 4 5 argümanı neden ayrı şekilde sıralıyoruz
// argüman kontrolleri eksik
// push fonksiyonu eksik
// 

