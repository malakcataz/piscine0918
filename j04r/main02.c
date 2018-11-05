/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:39:01 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/12 02:33:28 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;

	nb = 5;
	power = 16;
	printf(" %d power %d = ", nb, power);
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
