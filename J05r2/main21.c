/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main21.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:57:26 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/18 11:53:44 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char str[] = "2-A2A";
	char base[] = "0123456789abcdef";

	printf("%d", ft_atoi_base(str, base));
	return (0);
}
