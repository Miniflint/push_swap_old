/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_or_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:30:49 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:32:10 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	get_min_max(t_all *all, int max, int len)
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

int	get_max_min(t_all *all, int min, int len)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	tmp = INT_MAX;
	all->to_sort = all->max_size - all->a_sorted;
	if (len >= all->to_sort)
		return (get_max(all->stack_a));
	while (i < len - 1)
	{
		j = 0;
		while (j < all->to_sort)
		{
			if (all->stack_a->nb[j] < tmp && all->stack_a->nb[j] > min)
				tmp = all->stack_a->nb[j];
			j++;
		}
		min = tmp;
		tmp = INT_MAX;
		i++;
	}
	return (min);
}
