/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main18.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:14:36 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/16 22:58:06 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	int		j;

	if (argc == 1)
		return (0);
	j = ft_strlcpy(argv[1], argv[2], 3);
	printf("%d\n", j);
	printf("%s", argv[1]);
	return (0);
}
