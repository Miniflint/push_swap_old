/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:22:14 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/06 15:10:18 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	print_stacks(t_all *all)
{
	int	i;

	i = 0;
	ft_printf("A:\tB:\n");
	while (i < all->stack_a->current_size || i < all->stack_a->current_size)
	{
		if (i < all->stack_a->current_size)
			ft_printf("%i", all->stack_a->nb[i]);
		else
			ft_printf(" ");
		ft_printf("\t");
		if (i < all->stack_b->current_size)
			ft_printf("%i", all->stack_b->nb[i]);
		else
			ft_printf(" ");
		ft_printf("\n");
		i++;
	}
	ft_printf("\n\n");
}

void	check_func(t_all *all)
{
	rra(all, 1);
	print_stacks(all);
	rra(all, 1);
	print_stacks(all);
	rra(all, 1);
	print_stacks(all);
	pb(all);
	print_stacks(all);
}
