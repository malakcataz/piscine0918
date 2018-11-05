/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03_ft_concat_params.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:25:11 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 06:09:28 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int ac, char **av)
{
	printf("%s", ft_concat_params(ac, av));
	return (0);
}
