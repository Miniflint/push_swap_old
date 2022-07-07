/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __init__.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:16:06 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/06 17:14:16 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

static void __init__stack(t_all *all)
{
	all->stack_a->nb = malloc(sizeof(int) * (all->max_size + 1));
	all->stack_b->nb = malloc(sizeof(int) * (all->max_size + 1));
	if (!all->stack_a->nb || !all->stack_b->nb)
		handle_error("Couldn't malloc");
	all->stack_a->current_size = all->max_size;
	all->stack_b->current_size = 0;
}

void	__init__all(t_all *all, int size)
{
	all->stack_a = (t_stack *)malloc(sizeof(t_stack));
	all->stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!all->stack_a || !all->stack_b)
		handle_error("Failed to malloc");
	all->max_size = size;
	all->a_sorted = 0;
	all->to_sort = all->max_size - all->a_sorted;
	__init__stack(all);
}
