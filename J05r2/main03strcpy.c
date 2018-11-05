/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03strcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:31:53 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/10 21:39:57 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	dest[9];
	char	*src;

	src = "on";
	ft_strcpy(dest, src);
	printf("%c", dest[1]);
	return (0);
}
