/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:28:29 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 05:40:28 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	send_under_seven(t_all *all)
{
	if (all->max_size == 3)
		three_numbers(all);
	else if (all->max_size <= 5)
		five_numbers(all);
	else
		p_and_r_number(all);
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
	// check_double(&all);
	// if (check_order(&all))
	// 	handle_success("Already in order", &all);
	//send_under_seven(&all);
	pb(&all);
	return (0);
}
