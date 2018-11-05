/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:06:37 by tfoo              #+#    #+#             */
/*   Updated: 2018/09/09 23:11:46 by tfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_dot(char tab[][9], int p);

int		check_c(char tab[][9], int i, char test);

int		check_l(char tab[][9], int j, char test);

int		check_s(char tab[][9], int i, int j, char test);

char	sudoku_display(char tab[][9]);

int		recursive_l(char tab[][9], int p)
{
	int test;
	int i;
	int j;

	if ((p = find_dot(tab, p)) == 0)
	{
		sudoku_display(tab);
		return (1);
	}
	test = '1';
	i = p / 9;
	j = p % 9;
	while (test <= '9')
	{
		if (check_l(tab, j, test) && check_c(tab, i, test)
				&& check_s(tab, i, j, test))
		{
			tab[i][j] = test;
			if (recursive_l(tab, p + 1))
				return (1);
		}
		test++;
	}
	tab[i][j] = '.';
	return (0);
}
