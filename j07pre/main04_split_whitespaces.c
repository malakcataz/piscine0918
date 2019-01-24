/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04_split_whitespaces.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:36:21 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 01:15:55 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);

int		main(void)
{	
	char **result;
	char str[] = "   b   la  la";
	result = ft_split_whitespaces(str);
	printf("%s", result[1]);
	printf("%s", result[0]);
	return (0);
}
