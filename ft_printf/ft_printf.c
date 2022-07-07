/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 01:45:28 by tgoel             #+#    #+#             */
/*   Updated: 2022/04/03 16:55:20 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_resultset(char *set, char c)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (set[x] == c)
			return (1);
		x++;
	}
	return (0);
}

int	ft_isinset(char c)
{
	return (ft_resultset("cspdiuxX", c));
}

int	ft_putdsc(char after_p, void *parsed_arg, int x)
{
	if (after_p == 'c')
		x += ft_putchar_fd((char)parsed_arg, 1);
	else if (after_p == 's')
	{
		if ((char *)parsed_arg == NULL)
			x += ft_putstr_fd("(null)", 1);
		else
			x += ft_putstr_fd((char *)parsed_arg, 1);
	}
	else if (after_p == 'p')
	{
		x += ft_putstr_fd("0x", 1);
		x += ft_puthex_fd((unsigned long int)parsed_arg, 0, 1);
	}
	else if (after_p == 'd' || after_p == 'i')
		x += ft_putnbr_fd((int)parsed_arg, 1);
	else if (after_p == 'u')
		x += ft_putnbr_fd((unsigned int)parsed_arg, 1);
	else if (after_p == 'x')
		x += ft_puthex_fd((unsigned int)parsed_arg, 0, 1);
	else if (after_p == 'X')
		x += ft_puthex_fd((unsigned int)parsed_arg, 1, 1);
	return (x);
}

int	ft_printf(const char *sentence, ...)
{
	int		x;
	int		rtn_value;
	va_list	params;

	rtn_value = 0;
	x = 0;
	va_start(params, sentence);
	while (sentence[x])
	{
		if (sentence[x] == '%')
		{
			x++;
			if (sentence[x] == '%')
				rtn_value += ft_putchar_fd('%', 1);
			if (ft_isinset(sentence[x]) == 1)
				rtn_value += ft_putdsc(sentence[x], va_arg(params, void *), 0);
		}
		else
			rtn_value += ft_putchar_fd(sentence[x], 1);
		x++;
	}
	va_end(params);
	return (rtn_value);
}
