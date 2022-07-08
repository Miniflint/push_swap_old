/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:37:19 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 02:43:33 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

static void	reverse_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	if (!stack->current_size)
		return ;
	i = stack->current_size - 1;
	tmp = stack->nb[stack->current_size - 1];
	while (i > 0)
	{
		stack->nb[i] = stack->nb[i - 1];
		i--;
	}
	stack->nb[0] = tmp;
}

void	rra(t_all *all, int rrr)
{
	reverse_rotate(all->stack_a);
	if (rrr)
		ft_printf("rra\n");
}

void	rrb(t_all *all, int rrr)
{
	reverse_rotate(all->stack_b);
	if (rrr)
		ft_printf("rrb\n");
}

void	rrr(t_all *all)
{
	rra(all, 0);
	rrb(all, 0);
	ft_printf("rrr\n");
}