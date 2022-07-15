/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:56:01 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 07:08:56 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

// 1 3 2 - plus grand -> plus petit

void	three_numbers(t_all *all)
{
	int	nb[3];

	nb[0] = all->stack_a->nb[0];
	nb[1] = all->stack_a->nb[1];
	nb[2] = all->stack_a->nb[2];
	if (check_order(all))
		return ;
	if (nb[0] > nb[1] && nb[0] > nb[2])
	{
		ra(all, 1);
		if (nb[1] > nb[2])
			sa(all, 1);
	}
	else if (nb[0] < nb[1] && nb[0] < nb[2])
	{
		sa(all, 1);
		ra(all, 1);
	}
	else
	{
		if (nb[0] > nb[1] && nb[1] < nb[2])
			sa(all, 1);
		else
			rra(all, 1);
	}
}

void	sort_five(t_all *all, int min)
{
	if (all->stack_a->nb[3] == min)
		rra(all, 1);
	if (all->stack_a->nb[4])
		if (all->stack_a->nb[4] == min)
			rra(all, 1);
	if (all->stack_a->nb[2] == min)
		ra(all, 1);
	if (all->stack_a->nb[1] == min)
		ra(all, 1);
}

void	sort_to_five(t_all *all, int nb)
{
	int	min;

	while (nb > 3)
	{
		min = get_min(all->stack_a);
		sort_five(all, min);
		pb(all);
		nb--;
	}
	three_numbers(all);
	if (all->stack_b->nb[0] < all->stack_b->nb[1])
		sa(all, 1);
	pa(all);
	pa(all);
}
