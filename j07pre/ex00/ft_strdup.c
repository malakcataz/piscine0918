/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:33:24 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 04:37:55 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplic;

	i = 0;
	while (src[i])
		i++;
	if (!(duplic = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		duplic[i] = src[i];
		i++;
	}
	duplic[i] = '\0';
	return (duplic);
}
