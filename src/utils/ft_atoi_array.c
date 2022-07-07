/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:01:39 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/08 01:00:20 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:36:08 by tgoel             #+#    #+#             */
/*   Updated: 2022/06/18 04:10:46 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

void	free_splitted(void **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(*(str + i));
		*(str + i) = NULL;
	}
}

void	create_array(char **argv, t_all *all)
{
	int i;
	int	j;

	i = 0;
	j = 1;
	while (argv[j])
		all->stack_a->nb[i++] = ft_atoi(argv[j++]);
}

void	ft_atoi_array(char *str, t_all *all)
{
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split(str, ' ');
	while (splitted[i])
	{
		all->stack_a->nb[i] = ft_atoi(splitted[i]);
		i++;
	}
	free_splitted((void **)splitted);
}
