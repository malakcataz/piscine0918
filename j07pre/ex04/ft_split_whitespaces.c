/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:35:47 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 03:20:42 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_of_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
		if ((str[i] != '\n') && (str[i] != ' ')
		&& !(str[i] == '\t') && str[i])
			j++;
		while ((str[i] != '\n') && (str[i] != ' ')
		&& !(str[i] == '\t') && str[i])
			i++;
	}
	return (j);
}

int		count_lenght_word(char *str)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != '\n') && (str[i] != ' ') && (str[i] != '\t')
			&& str[i])
	{
		i++;
		k++;
	}
	return (k);
}

char	**fill_tab(char *str, char **solution)
{
	int i;
	int k;
	int m;

	k = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
				&& str[i])
			i++;
		m = 0;
		while (str[i] != '\n' && str[i] != ' ' && str[i] != '\t'
				&& str[i])
		{
			solution[k][m] = str[i];
			m++;
			i++;
		}
		if (m > 0)
			solution[k][m] = '\0';
		k++;
	}
	return (solution);
}

int		*ft_fill_pretab(int *pretab, char *str, int nb_wrd)
{
	int i;
	int nxt;

	i = 0;
	nxt = 0;
	while (i < nb_wrd)
	{
		pretab[i] = count_lenght_word(&str[nxt]);
		nxt = nxt + count_lenght_word(str);
		i++;
	}
	return (pretab);
}

char	**ft_split_whitespaces(char *str)
{
	int		*pretab;
	char	**solution;
	int		i;
	int		nb_wrd;

	nb_wrd = number_of_words(str);
	if (!(pretab = (int *)malloc(sizeof(int) * (nb_wrd + 1))))
		return (0);
	pretab = ft_fill_pretab(pretab, str, nb_wrd);
	if (!(solution = (char **)malloc(sizeof(char *) * (nb_wrd + 1))))
		return (0);
	i = 0;
	while (i < nb_wrd)
	{
		if (!(solution[i] = (char *)malloc(sizeof(char) * (pretab[i] + 1))))
			return (0);
		i++;
	}
	solution = fill_tab(str, solution);
	solution[i] = 0;
	return (solution);
}
