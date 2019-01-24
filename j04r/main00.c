/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:17:25 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/12 02:30:40 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int nb;

	nb = 11;
	printf("factorial %d = ", nb);
	ft_iterative_factorial(nb);
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
