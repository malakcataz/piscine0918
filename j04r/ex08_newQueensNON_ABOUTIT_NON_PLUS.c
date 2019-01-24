/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:19:23 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/15 19:25:47 by spatriar         ###   ########.fr       */
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

int		fulling_chess(int p, int *plateau, int *count)
{
	int		next_l;

	if (p == 64)
	{
		*count = *count + 1;
		return (1);
	}
	next_l = (p / 8 + 1 ) * 8;	
	if (check_possible(p, plateau))
		{
			plateau[p] = 1;
			if (fulling_chess(next_l, plateau, count))
				return (*count);
			plateau[p] = 0;
		}
	else if (p + 1 == 8)
		return (*count);
	else if (p + 1 == next_l)
		return (3);
	return(fulling_chess(p + 1, plateau, count));
}

int		ft_eight_queens_puzzle(void)
{
	int		plateau[63];
	int		queens;
	int		i;
	int		combinaisons;
	int		x;

	x = 0;
	i = 0;
	queens = 0;
	while (plateau[i])
	{
		plateau[i] = 0;
		i++;
	}
	return (fulling_chess(0, plateau, &x));
}
