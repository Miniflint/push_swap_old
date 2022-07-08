/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:53 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 02:48:49 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->nb[1];
	stack->nb[1] = stack->nb[0];
	stack->nb[0] = tmp;
}

void	sa(t_all *all, int ss)
{
	swap(all->stack_a);
	if (ss)
		ft_printf("sa\n");
}

void	sb(t_all *all, int ss)
{
	swap(all->stack_b);
	if (ss)
		ft_printf("sa\n");
}

void	ss(t_all *all)
{
	sa(all, 0);
	sb(all, 0);
	ft_printf("ss\n");
}