/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:03:27 by tgoel             #+#    #+#             */
/*   Updated: 2022/06/30 08:10:53 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

int	bloc_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (i == 0 && *s != c)
		{
			i = 1;
			count++;
		}
		else if (i == 1 && *s == c)
			i = 0;
		s++;
	}
	return (count);
}

int	block_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

void	*array_free(char **array, int i)
{
	while (i > 0)
	{
		free(array[i]);
		i--;
	}
	free (array[i]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		blockcount;
	int		i;
	int		*test;

	i = 0;
	if (!s)
		handle_error("No str sent");
	blockcount = bloc_count((char *)s, c);
	array = (char **)malloc(sizeof(char **) * (blockcount + 1));
	if (!array)
		handle_error("Couldn't malloc");
	test = malloc(sizeof(int) * (blockcount + 1));
	if (!test)
		handle_error("Couldn't malloc");
	while (blockcount--)
	{
		while (*s == c && *s)
			s++;
		array[i] = ft_substr((char *)s, 0, block_len((char *)s, c));
		if (!array)
			return (array_free(array, i));
		s = s + block_len((char *)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
