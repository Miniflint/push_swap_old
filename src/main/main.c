/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:28:29 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/10 21:52:03 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	check_order(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->stack_a->current_size - 1)
	{
		i++;
		if (all->stack_a->nb[i - 1] > all->stack_a->nb[i])
			return (0);
	}
	return (1);
}

void	send_under_seven(t_all *all)
{
	int i;
	int j;

	if (all->max_size == 3)
		three_numbers(all);
	else if (all->max_size <= 5)
		five_numbers(all);
	else
	{
		i = all->stack_a->current_size;
		while(i > 0)
		{
			j = all->formula_sort;
			p_and_r_number(all, j / 2);
			i--;
			all->formula_sort = ((all->stack_a->current_size / 6) + 32);
		}
		big_sort_b(all);
	}
}

int	main(int argc, char **argv)
{
	t_all	all;

	if (argc < 2)
		handle_error("not enough arguments");
	else if (argc == 2)
	{
		__init__all(&all, bloc_count(argv[1], ' '));
		ft_atoi_array(argv[1], &all);
	}
	else
	{
		__init__all(&all, argc - 1);
		create_array(argv, &all);
	}
	check_double(&all);
	if (check_order(&all))
		handle_success("Already in order", &all);
	send_under_seven(&all);
	return (0);
}
