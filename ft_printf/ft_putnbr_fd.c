/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:09:06 by tgoel             #+#    #+#             */
/*   Updated: 2022/04/03 16:57:03 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(long long int n, int fd)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		x += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		x += ft_putchar_fd(n + 48, fd);
		return (x);
	}
	else
		x += ft_putnbr_fd(n / 10, fd);
	x += ft_putnbr_fd(n % 10, fd);
	return (x);
}
