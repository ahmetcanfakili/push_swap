/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:05:26 by afakili           #+#    #+#             */
/*   Updated: 2022/07/31 21:44:44 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include "utils/ft_printf/ft_printf.h"
#include "utils/get_next_line/get_next_line.h"
#include "utils/libft/libft.h"

typedef struct s_swap {
    int id;
    unsigned capacity;
    int* array;
} t_swap;

#endif