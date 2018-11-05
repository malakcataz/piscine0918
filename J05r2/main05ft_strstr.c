/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05ft_strstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:35:07 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/17 23:51:55 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	*str;
	char	*to_find;

	str = "blalalio";
	to_find = "";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
