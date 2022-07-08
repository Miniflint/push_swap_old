/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:13 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 06:29:55 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void    push(t_stack *a, t_stack *b)
{
	int    i;

	if (!a->current_size)
		return ;
	if (b->current_size)
	{
		i = b->current_size;
		while (i)
		{
			i--;
			b->nb[i + 1] = b->nb[i];
		}
	}
	ft_printf("ptr a: %p\tptr b: %p\n", a->nb[0], b->nb[0]);
	b->nb[0] = a->nb[0];
	b->current_size += 1;
	i = 0;
	while (i < a->current_size - 1)
	{
		a->nb[i] = a->nb[i + 1];
		i++;
	}
	a->current_size -= 1;
}

void    pb(t_all *all)
{
	push(all->stack_a, all->stack_b);
	ft_printf("pb\n");
}

void    pa(t_all *all)
{
	push(all->stack_b, all->stack_a);
	ft_printf("pa\n");
}
