/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:08:44 by afakili           #+#    #+#             */
/*   Updated: 2022/08/02 16:08:44 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**read_args(int argc, char **argv)
{
	char	*str;
	char	*dst;
	char	**split_str;
	int		idx;

	idx = 0;
	str = "";
	(void)argc;
	while (argv[++idx])
	{
		str = ft_strjoin(str, argv[idx]);
		dst = ft_strjoin(str, " ");
		free(str);
	}
	split_str = ft_split(dst, ' ');
	free(dst);
	return (split_str);
}
