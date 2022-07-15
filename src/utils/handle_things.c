/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_things.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 06:25:54 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:46:47 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

static void	free_stck(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->current_size)
	{
		while (i < stack->current_size)
		{
			free(stack->nb[i]);
			i++;
		}
	}
	if (stack)
		free(stack);
}

void	free_all(t_all *all)
{
	free_stck(all->stack_a);
	free_stck(all->stack_b);
}

void	handle_error(char *str, t_all *all)
{
	write(2, "\n./push_swap: [Error]: ", 18);
	write(2, str, ft_strlen(str));
	write(2, "\n\0", 2);
	free_all(all);
	exit(EXIT_FAILURE);
}
