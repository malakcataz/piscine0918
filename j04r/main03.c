/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:19:02 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/08 21:22:43 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_recursive_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;

	nb = 5;
	power = 3;
	printf(" %d power %d = ", nb, power);
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
