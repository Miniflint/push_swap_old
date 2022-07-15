/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:23:34 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:45:24 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "pushstruct.h"

/* Sorting */
void	three_numbers(t_all *all);
void	sort_to_five(t_all *all, int nb);
void	big_sort_b(t_all *all);
void	p_and_r_number(t_all *all, int nb);

	/* Sorting utils */
int		get_min_max(t_all *all, int max, int len);
int		get_max_min(t_all *all, int min, int len);
int		get_size_push(t_all *all, int min);
int		get_min(t_stack *stack);
int		get_max(t_stack *stack);

/* Errors handling */
void	free_all(t_all *all);
void	handle_error(char *str, t_all *all);

/* init */
void	__init__all(t_all *all, int size);

/* checking */
void	check_double(t_all *all);
int		check_order(t_all *all);

/* utils */
int		ft_strlen(char *str);
int		ft_isdigit(char c);
int		ft_atoi(char *str);
void	ft_atoi_array(char *str, t_all *all);
void	create_array(char **argv, t_all *all);
void	print_stacks(t_all *all);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int		bloc_count(const char *s, char c);

/* basics instructions */
	/* swap */
void	sa(t_all *all, int ss);
void	sb(t_all *all, int ss);
void	ss(t_all *all);
	/* rotate */
void	ra(t_all *all, int rr);
void	rb(t_all *all, int rr);
void	rr(t_all *all);
	/* reverse rotate */
void	rra(t_all *all, int rrr);
void	rrb(t_all *all, int rrr);
void	rrr(t_all *all);
	/* push */
void	pa(t_all *all);
void	pb(t_all *all);
		/* utils push */
void    push(t_stack *a, t_stack *b);

#endif