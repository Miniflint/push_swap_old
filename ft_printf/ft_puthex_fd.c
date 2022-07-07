/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:05:54 by tgoel             #+#    #+#             */
/*   Updated: 2022/04/03 16:56:57 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long int n, int maj, int fd)
{
	int	x;

	x = 0;
	if (n < 16)
	{
		if (n >= 10)
		{
			if (maj == 0)
				x += ft_putchar_fd((n - 10) + 'a', fd);
			else
				x += ft_putchar_fd((n - 10) + 'A', fd);
		}
		else
			x += ft_putchar_fd(n + 48, fd);
		return (x);
	}
	else
		x += ft_puthex_fd(n / 16, maj, fd);
	x += ft_puthex_fd(n % 16, maj, fd);
	return (x);
}
