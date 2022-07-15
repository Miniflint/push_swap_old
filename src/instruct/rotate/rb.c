/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:58 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 09:43:38 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/pushswap.h"

void	rb(t_all *all, int rr)
{
	int	tmp;
	int	i;

	i = 1;
	if (!all->stack_b->current_size)
		return ;
	tmp = all->stack_b->nb[0];
	while (i < (all->stack_b->current_size))
	{
		all->stack_b->nb[i - 1] = all->stack_b->nb[i];
		i++;
	}
	all->stack_b->nb[all->stack_b->current_size - 1] = tmp;
	if (rr)
		write(1, "rb\n", 3);
}
