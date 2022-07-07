/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:33:00 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/01 20:47:31 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

static void	f_rot(t_stack *stack)
{
	int i;

	if (stack->current_size)
	{
		i = stack->current_size;
		while (i)
		{
			i--;
			stack->nb[i + 1] = stack->nb[i];
		}
	}
}

static void	f_rev(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->current_size)
	{
		stack->nb[i] = stack->nb[i + 1];
		i++;
	}
}

void    push(t_stack *stack1, t_stack *stack2)
{
    if (stack1->current_size)
    {
		f_rot(stack2);
        stack2->nb[0] = stack1->nb[0];
        stack2->current_size += 1;
        f_rev(stack1);
        stack1->current_size -= 1;
    }
}