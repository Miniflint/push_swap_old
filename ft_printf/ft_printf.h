/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 05:08:07 by tgoel             #+#    #+#             */
/*   Updated: 2022/04/04 16:41:30 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *sentence, ...);
int		ft_putdsc(char after_p, void *parsed_arg, int x);
int		ft_isinset(char c);
int		ft_puthex_fd(unsigned long int n, int maj, int fd);
int		ft_resultset(char *set, char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(long long int n, int fd);
int		ft_putstr_fd(char *s, int fd);

#endif
