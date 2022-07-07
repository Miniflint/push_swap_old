/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 06:25:54 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/07 01:27:38 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	little_handler(int i)
{
	if (i == 1)
		handle_error("Not enough arguments");
	else if (i == 2)
		handle_error("Second error");
	else if (i == 3)
		handle_error("Only numbers");
}

void	handle_error(char *str)
{
	ft_printf("\n./pushswap: [Error]: %s\n", str);
	exit(EXIT_FAILURE);
}

void	handle_success(char *str, __unused t_all *all)
{
	ft_printf("Success: %s\n", str);
	exit(EXIT_SUCCESS);
}
