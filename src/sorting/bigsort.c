/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:29:56 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:51:24 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	get_max_index(t_stack *n)
{
	int	i;
	int	max;

	i = 0;
	max = get_max(n);
	while (i < n->current_size)
	{
		if (n->nb[i] == max)
			return (i);
		i++;
	}
	return (-1);
}

static void	while_sort(t_all *all, int max_i)
{
	int	j;

	j = 0;
	if (max_i > all->stack_b->current_size / 2)
	{
		while (j < all->stack_b->current_size - max_i)
		{
			rrb(all, 1);
			j++;
		}
	}
	else
	{
		while (j < max_i)
		{
			rb(all, 1);
			j++;
		}
	}
}

void	big_sort_b(t_all *all)
{
	int	i;
	int	max_i;

	i = all->stack_b->current_size;
	while (i)
	{
		max_i = get_max_index(all->stack_b);
		if (max_i == -1)
			handle_error("damn", all);
		while_sort(all, max_i);
		pa(all);
		i--;
	}
}
