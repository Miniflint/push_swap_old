/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:57:36 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 06:57:59 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../HEADER/pushswap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[x])
	{
		if (len > y && start <= x)
		{
			substr[y] = s[x];
			y++;
		}
		x++;
	}
	substr[y] = '\0';
	return (substr);
}
