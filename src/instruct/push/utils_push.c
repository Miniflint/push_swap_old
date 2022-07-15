/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:33:00 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 09:43:20 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/pushswap.h"

void	push(t_stack *a, t_stack *b)
{
	int	i;

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
