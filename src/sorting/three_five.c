/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:56:01 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/07 00:52:09 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

// 1 3 2 - plus grand -> plus petit

void	three_numbers(t_all *all)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = all->stack_a->nb[0];
	nb2 = all->stack_a->nb[1];
	nb3 = all->stack_a->nb[2];
	if (nb1 > nb2 && nb1 > nb3)
	{
		ra(all, 1);
		if (nb2 > nb3)
			sa(all, 1);
	}
	else if (nb1 < nb2 && nb1 < nb3)
	{
		sa(all, 1);
		ra(all, 1);
	}
	else
	{
		if (nb1 > nb2 && nb2 < nb3)
			sa(all, 1);
		else
			rra(all, 1);
	}
}

void	five_numbers(__unused t_all *all)
{
	ft_printf("five numbers");
}
