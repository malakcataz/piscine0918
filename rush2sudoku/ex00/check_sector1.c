/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sector_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:18:24 by tfoo              #+#    #+#             */
/*   Updated: 2018/09/09 23:08:33 by tfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_s(char tab[][9], int i, int j, char test)
{
	int m;
	int n;

	m = i - (i % 3);
	n = j - (j % 3);
	while (m < (i - (i % 3) + 3))
	{
		n = j - (j % 3);
		while (n < (j - (j % 3) + 3))
		{
			if (tab[m][n] == test)
				return (0);
			n++;
		}
		m++;
	}
	return (1);
}
