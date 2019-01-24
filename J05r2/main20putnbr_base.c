/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main20putnbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:00:22 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/17 05:22:12 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base);

#include <stdlib.h>

int	main(int ac, char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (ac);
}
