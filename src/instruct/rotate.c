/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:58 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 02:47:48 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

static void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 1;
	if (!stack->current_size)
		return ;
	tmp = stack->nb[0];
	while (i < (stack->current_size))
	{
		stack->nb[i - 1] = stack->nb[i];
		i++;
	}
	stack->nb[stack->current_size - 1] = tmp;

}

void	ra(t_all *all, int rr)
{
	rotate(all->stack_a);
	if (rr)
		ft_printf("ra\n");
}

void	rb(t_all *all, int rr)
{
	rotate(all->stack_b);
	if (rr)
		ft_printf("rb\n");
}

void rr(t_all *all)
{
	ra(all, 0);
	rb(all, 0);
}