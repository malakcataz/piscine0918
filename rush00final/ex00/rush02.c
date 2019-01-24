/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 00:05:13 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/02 18:08:03 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		premligne(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i < (x - 1))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}

int		derligne(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('C');
		}
		else if (i < (x - 1))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
		}
		i++;
	}
	return (0);
}

int		middle(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('B');
		}
		else if (i < (x - 1))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	if (x >= 0 && y >= 0)
	{
		while (j < y)
		{
			if (j == 0)
			{
				premligne(x);
			}
			else if (j < (y - 1))
			{
				middle(x);
			}
			else
				derligne(x);
			j++;
		}
	}
}
