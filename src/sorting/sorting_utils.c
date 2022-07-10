/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:22:36 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/10 21:58:05 by tgoel            ###   ########.fr       */
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
	return(tmp);
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
	return(tmp);
}

int	get_min_max_i(t_all *all, int max, int len)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	tmp = INT_MIN;
	all->to_sort = all->max_size - all->a_sorted;
	if (len >= all->to_sort)
		return (get_min(all->stack_a));
	while (i < len - 1)
	{
		j = 0;
		while (j < all->to_sort)
		{
			if (all->stack_a->nb[j] > tmp && all->stack_a->nb[j] < max)
				tmp = all->stack_a->nb[j];
			j++;
		}
		max = tmp;
		tmp = INT_MIN;
		i++;
	}
	return (max);
}

void	p_and_r_number(t_all *all, int nb)
{
	int	max;
	int	i;
	int	len;

	i = 0;
	max = get_min_max_i(all, get_max(all->stack_a), nb);
	len = all->to_sort;
	while (i < len)
	{
		if (all->stack_a->nb[0] >= max)
			pb(all);
		else
			ra(all, 1);
		i++;
	}
	all->a_sorted += nb;
}
