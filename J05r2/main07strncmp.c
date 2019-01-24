/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 01:08:53 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/17 02:35:35 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "1234";
	s2 = "12345";
	printf("%d", ft_strncmp(s1, s2, 9));
	return (0);
}
