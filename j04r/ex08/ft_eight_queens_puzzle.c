/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:19:23 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/13 21:34:14 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_possible(int p, int *plateau)
{
	int		c;
	int		l;
	int		d;

	l = (p / 8) * 8;
	c = p % 8;
	d = p - 7;

	if (p >= 64)
		return (0);
	while (l < p)
	{
		if (plateau[l] == 1)
			return (0);
		l++;
	}
	while (c < p)
	{
		if (plateau[c] == 1)
			return (0);
		c += 8;
	}
	while (d >= 0)
	{
		if (plateau[d] == 1)
			return (0);
		d -= 7;
	}
	d = p - 9;
	while (d >= 0)
	{
		if (plateau[d] == 1)
			return (0);
		d -= 9;
	}
	return (1);
}

int		fulling_chess(int p, int queens, int *plateau, int n)
{
	int q;
	int pose;

	while (p < 64 && queens <= 8)
	{

		q = p;
		if (queens != 8 && queens > 0 && q < ((queens - 1) * 8) + 8)
		{
			plateau[q] = 0;
			n = n + fulling_chess(q + 1, queens - 1, plateau, n);
			plateau[q] = 1;
			p = (p / 8 + 1) * 8;
		}	
		if (queens == 8 && q < 64)
		{
			if (q == 63)
				return (1 + n);
			else
			{
				plateau[q] = 0;
				n = 1 + n + fulling_chess(q + 1, queens - 1, plateau, n);
			}
		}
		
		pose = 0;
		while (pose < 1)
		{
			if (p < 64 && check_possible(p, plateau) && queens != 8)
			{
				plateau[p] = 1;
				queens++;
				pose++;
			}
			else
				p++;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int		plateau[63];
	int		queens;
	int		i;
	int		combinaisons;

	i = 0;
	queens = 0;
	while (plateau[i])
	{
		plateau[i] = 0;
		i++;
	}
	combinaisons = fulling_chess(0, queens, plateau, 0);
	return (combinaisons);
}
