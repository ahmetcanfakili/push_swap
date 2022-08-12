/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:05:26 by afakili           #+#    #+#             */
/*   Updated: 2022/08/13 00:21:16 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include "utils/ft_printf/ft_printf.h"
# include "utils/libft/libft.h"

typedef struct s_swap {
	int	id;
	int	capacity;
	int	*array;
}	t_swap;

void	swap(t_swap *stack, int type);
void	ss(t_swap *stack_1, t_swap *stack_2);
void	push(t_swap *stack_1, t_swap *stack_2, int type);
void	rotate(t_swap *stack, int type);
void	rr(t_swap *stack_1, t_swap *stack_2);
void	reverse_rotate(t_swap *stack, int type);
void	rrr(t_swap *stack_1, t_swap *stack_2);
int		ft_atoi_v2(const char *str);
char	**read_args(int argc, char **argv);
void	create_stack(int argc, char **argv, t_swap *stack_1, t_swap *stack_2);
void	check_dup(t_swap *stack_1, t_swap *stack_2);
int		*pre_sort(t_swap *stack);
void	indexing(t_swap *stack);
void	two_arg_sort(t_swap *stack);
void	three_arg_sort(t_swap *stack_1, t_swap *stack_2);
void	four_arg_sort(t_swap *stack_1, t_swap *stack_2);
void	five_arg_sort(t_swap *stack_1, t_swap *stack_2);
void	check_sorted(t_swap *stack_1, t_swap *stack_2);
int		get_min_idx_or_value(t_swap *stack, int type);
int		get_max_idx_or_value(t_swap *stack, int type);
void	free_stack(t_swap *stack);
int		is_valid_arg(char *arg);
void	small_sort(t_swap *stack_1, t_swap *stack_2);
void	big_sort(t_swap *stack_1, t_swap *stack_2);
void	sort(t_swap *stack_1, t_swap *stack_2);
int		find_pivot(t_swap *stack);
void	if_small_send_b(t_swap *stack_1, t_swap *stack_2);
int		find_pos(t_swap *stack, int arg);
void	check_split(char **split_str);
void	check_numbers(char **split_str);
void	error(t_swap *stack_1, t_swap *stack_2);
void	error_2(void);
void	free_func(t_swap *stack_1, t_swap *stack_2);
void	rot_together_st(t_swap *st_1, t_swap *st_2, int *idx_a, int *idx_b);
void	find_zero_and_sort(t_swap *stack);
void	send_to_a(t_swap *stack_1, t_swap *stack_2, int idx_a, int idx_b);
void	best_route(t_swap *stack_1, t_swap *stack_2, int *idx_a, int *idx_b);
void	five_arg_helper(t_swap *stack_1, t_swap *stack_2, int i);

#endif
