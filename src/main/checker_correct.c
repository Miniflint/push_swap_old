/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_correct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:08:44 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 03:33:24 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	check_double(t_all *all)
{
	int	i;
	int	j;

	i = 0;
	while (i < all->max_size)
	{
		j = i + 1;
		while (j < all->max_size)
		{
			if (i != j)
				if (all->stack_a->nb[i] == all->stack_a->nb[j])
					handle_error("Doublons !");
			j++;
		}
		i++;
	}
}

int	check_order(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->stack_a->current_size - 1)
	{
		i++;
		if (all->stack_a->nb[i - 1] > all->stack_a->nb[i])
			return (0);
	}
	return (1);
}
