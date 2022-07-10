/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushstruct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 06:33:01 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/10 19:27:22 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSTRUCT_H
# define PUSHSTRUCT_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct S_stack
{
	int	*nb;
	int current_size;
}	t_stack;

typedef struct S_all
{
	int		max_size;
	int		a_sorted;
	int		to_sort;
	int		formula_sort;
	t_stack *stack_a;
	t_stack *stack_b;
}	t_all;

#endif