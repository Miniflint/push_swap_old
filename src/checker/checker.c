/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:22:14 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 06:28:34 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	ft_printf("A:\tB:\n");
	while (i < a->current_size || i < b->current_size)
	{
		if (i < a->current_size)
			ft_printf("%d", a->nb[i]);
		else
			ft_printf(" ");
		ft_printf("\t");
		if (i < b->current_size)
			ft_printf("%d", b->nb[i]);
		else
			ft_printf(" ");
		ft_printf("\n");
		i++;
	}
	ft_printf("\n\n");
}

// void	check_func(t_all *all)
// {
// 	rra(all, 1);
// 	print_stacks(all);
// 	rra(all, 1);
// 	print_stacks(all);
// 	rra(all, 1);
// 	print_stacks(all);
// 	pb(all);
// 	print_stacks(all);
// }
