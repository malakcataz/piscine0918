/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:46:32 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/09 13:00:11 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int nb;

	nb = 2;
	printf("%d", ft_is_prime(nb));
	return (0);
}