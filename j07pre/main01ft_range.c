/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01ft_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 04:51:26 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 05:08:33 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int i;
	int	min;
	int max;
	int *dest;

	i = 0;
	min = 11;
	max = 15;
	dest = ft_range(min, max);
	while(dest[i])
	{
		printf("%c\n",dest[i]);
		i++;
	}
	return (0);
}
