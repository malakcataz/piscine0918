/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 00:05:13 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/04 10:05:50 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/*void	ft_condition(int k, int x, int y)
{
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		while (k < (y - 2))
		{
			ft_putchar('B');
			ft_putchar('\n');
			k++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}
*/ 
int		premligne(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
			if (x == 1)
				ft_putchar('\n');
		}
		else if (i < (x - 1))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
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
			ft_putchar('A');
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
			if (x==1)
				ft_putchar('\n');

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
	int k;

	j = 0;
	k = 0;
	if (x > 0 && y > 0)
	{
//		if (x == 1)
//			ft_condition(k, x, y);
//		else
//		{
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
//	else
//		write(2, "IMPOSSIBLE \n", 12);
}

int		main(void)
{
	int x;
	int y;

	x = 1;
	y = 6;
	rush(x, y);
	return (0);
}
