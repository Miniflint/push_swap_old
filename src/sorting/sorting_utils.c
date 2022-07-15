/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:22:36 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:46:33 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	get_max(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = INT_MIN;
	while (i < stack->current_size)
	{
		if (stack->nb[i] > tmp)
			tmp = stack->nb[i];
		i++;
	}
	return (tmp);
}

int	get_min(t_stack *stack)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = INT_MAX;
	while (i < stack->current_size)
	{
		if (stack->nb[i] < tmp)
			tmp = stack->nb[i];
		i++;
	}
	return (tmp);
}

int	get_size_push(t_all *all, int min)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	while (i < all->stack_a->current_size)
	{
		if (all->stack_a->nb[i] > min)
			j++;
		i++;
	}
	i = 0;
	j = j / 2;
	while (i < all->stack_a->current_size && j)
	{
		if (all->stack_a->nb[i] > min)
		{
			x = all->stack_a->nb[i];
			j--;
		}
		i++;
	}
	return (x);
}

// min = get_max_min(all, get_min(all->stack_a), nb);

void	p_and_r_number(t_all *all, int nb)
{
	int	i;
	int	len;
	int	min;
	int	mid;

	i = 0;
	min = get_min_max(all, get_max(all->stack_a), nb);
	mid = get_size_push(all, min);
	len = all->to_sort;
	while (i < len)
	{
		if (all->stack_a->nb[0] >= min)
		{
			pb(all);
			if (all->stack_b->nb[0] < mid)
				rb(all, 1);
		}
		else
			ra(all, 1);
		i++;
	}
	all->a_sorted += nb;
}
