/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:07 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/01 21:16:42 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void	rrb(t_all *all, int rrr)
{
	int	tmp;
	int	i;

	if (!all->stack_b->current_size)
		return ;
	i = all->stack_b->current_size - 1;
	tmp = all->stack_b->nb[all->stack_b->current_size - 1];
	while (i > 0)
	{
		all->stack_b->nb[i] = all->stack_b->nb[i - 1];
		i--;
	}
	all->stack_b->nb[0] = tmp;
	if (rrr)
		ft_printf("rrb\n");
}
