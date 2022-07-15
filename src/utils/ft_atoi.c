/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:07:34 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 09:32:16 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	ft_atoi(char *str, t_all *all)
{
	int				x;
	long long int	res;
	int				sign;

	x = 0;
	res = 0;
	sign = 1;
	if ((str[x] == '-') || (str[x] == '+'))
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x])
	{
		if (!ft_isdigit(str[x]))
			handle_error("only digits please", all);
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	if (res * sign > INT_MAX || res * sign < INT_MIN)
		handle_error("Out of int max / min", all);
	return (res * sign);
}
