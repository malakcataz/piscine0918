/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 23:42:27 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 05:32:40 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	env;
	unsigned int	i;
	int				*range;

	if (min >= max)
		return (NULL);
	env = max - min;
	if (!(range = (int *)malloc(sizeof(int) * (env + 1))))
		return (0);
	i = 0;
	while (min < max)
	{
		*tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	if (!(*range = (int *)malloc(sizeof(int) * (env + 1))))
		return (0);
	*range = tab;
	return (env);
}
