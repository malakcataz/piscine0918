/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:08:12 by tfoo              #+#    #+#             */
/*   Updated: 2018/09/09 23:06:06 by tfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_dot(char tab[][9], int p)
{
	int i;
	int j;

	i = p / 9;
	j = p % 9;
	while (tab[i][j] != '.')
	{
		if (p == 81)
			return (0);
		p++;
		i = p / 9;
		j = p % 9;
	}
	return (p);
}