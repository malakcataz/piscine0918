/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:48:30 by stsong            #+#    #+#             */
/*   Updated: 2018/09/09 23:39:31 by tfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		recursive_l(char tab[][9], int p);

int		str_count(char **argv);

void	tab_set(char **argv, char tab[][9])
{
	int i;
	int j;
	int rand;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			tab[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *grid;
	char tab[9][9];

	if (argc == 10)
	{
		if (str_count(argv) == 1)
		{
			tab_set(argv, tab);
			if (!recursive_l(tab, 0))
				return (write(1, "Error\n", 6));
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
