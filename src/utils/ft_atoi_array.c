/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:01:39 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 09:44:25 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	create_array(char **argv, t_all *all)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argv[j])
		all->stack_a->nb[i++] = ft_atoi(argv[j++], all);
}

void	ft_atoi_array(char *str, t_all *all)
{
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split(str, ' ');
	while (splitted[i])
	{
		all->stack_a->nb[i] = ft_atoi(splitted[i], all);
		free(splitted[i]);
		splitted[i] = NULL;
		i++;
	}
	free(splitted);
}
