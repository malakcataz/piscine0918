/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 04:32:50 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 04:43:53 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int		main(void)
{
	char src[] = "testons Ca";
	printf("%s", ft_strdup(src));
	return (0);
}
