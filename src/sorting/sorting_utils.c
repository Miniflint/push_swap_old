/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:22:36 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 05:23:20 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	get_max(t_all *all)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = INT_MIN;
	while (i < all->stack_a->current_size)
	{
		if (all->stack_a->nb[i] > tmp)
			tmp = all->stack_a->nb[i];
		i++;
	}
	return(tmp);
}

int	get_min(t_all *all)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = INT_MAX;
	while (i < all->stack_a->current_size)
	{
		if (all->stack_a->nb[i] < tmp)
			tmp = all->stack_a->nb[i];
		i++;
	}
	ft_printf("%i\n", tmp);
	return(tmp);
}

int	get_min_max_i(t_all *all, int max, int len)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	tmp = INT_MIN;
	all->to_sort = all->max_size - all->alr_sorted;
	if (len >= all->to_sort)
		return (get_min(all));
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

void	p_and_r_number(t_all *all)
{
	// int	max;
	// int	i;
	// int	len;

	// i = 0;
	// max = get_min_max_i(all, get_max(all), 20);
	// len = all->to_sort;
	// while (i < len)
	// {
	// 	if (all->stack_a->nb[0] >= max)
	// 		pb(all);
	// 	else
	// 		ra(all, 1);
	// 	i++;
	// }
	//print_stacks(all);
	pb(all);
	pb(all);
	ft_printf("\n\n");
	// all->alr_sorted += 20;
	//print_stacks(all);
}
