/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:56 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/06 14:13:28 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void	ra(t_all *all, int rr)
{
	int	tmp;
	int	i;

	i = 1;
	if (!all->stack_a->current_size)
		return ;
	tmp = all->stack_a->nb[0];
	while (i < (all->stack_a->current_size))
	{
		all->stack_a->nb[i - 1] = all->stack_a->nb[i];
		i++;
	}
	all->stack_a->nb[all->stack_a->current_size - 1] = tmp;
	if (rr)
		ft_printf("ra\n");
}
