/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_correct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:08:44 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/16 12:24:07 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	check_double(t_all *all)
{
	int	i;
	int	j;

	i = 0;
	if (all->stack_a->current_size < 2)
		success_n(all);
	while (i < all->max_size)
	{
		j = i + 1;
		while (j < all->max_size)
		{
			if (i != j)
				if (all->stack_a->nb[i] == all->stack_a->nb[j])
					handle_error("Error", all);
			j++;
		}
		i++;
	}
}
