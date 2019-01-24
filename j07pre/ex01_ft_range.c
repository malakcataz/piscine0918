/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:55:59 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 05:09:21 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	env;
	unsigned int	i;
	int				*tab;

	if (min >= max)
		return (NULL);
	env = max - min;
	if (!(tab = (int *)malloc(sizeof(int) * (env + 1))))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
