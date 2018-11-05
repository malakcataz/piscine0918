/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 00:05:13 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/02 23:38:00 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_condition(int k, int x, int y)
{
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		while (k < (y - 2))
		{
			ft_putchar('|');
			ft_putchar('\n');
			k++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

int		premligne(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}
		else if (i < (x - 1))
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
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
			ft_putchar('o');
		}
		else if (i < (x - 1))
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('0');
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
			ft_putchar('|');
		}
		else if (i < (x - 1))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}

void	rush(int x, int y)
{
	int j;
	int k;

	j = 0;
	k = 0;
	if (x > 0 && y > 0)
	{
		if (x == 1)
			ft_condition(k, x, y);
		else
		{
		while (j < y)
		{
			if (j == 0)
				premligne(x);
			else if (j < (y - 1))
				middle(x);
			else
				derligne(x);
			j++;
		}
	}
	}
}

