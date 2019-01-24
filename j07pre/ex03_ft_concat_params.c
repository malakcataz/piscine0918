/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:27:33 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 06:06:48 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*filling_tab(char *tab, char **argv)
{
	int indtab;
	int i;
	int j;

	indtab = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			tab[indtab] = argv[i][j];
			j++;
			indtab++;
		}
		tab[indtab] = '\n';
		indtab++;
		i++;
	}
	tab[indtab - 1] = '\0';
	return (tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		indtab;
	char	*tab;

	(void)argc;
	i = 1;
	indtab = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		indtab += j + 1;
		i++;
	}
	if (!(tab = (char *)malloc(sizeof(char) * (indtab))))
		return (NULL);
	tab = filling_tab(tab, argv);
	return (tab);
}
