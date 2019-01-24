/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 06:39:41 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/12 23:39:39 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	abcd(int a, int b, int c, int d)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	if (!(a == 9 && b == 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		blq(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
					abcd(a, b, c, d++);
				c++;
				d = 0;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 0;
		c = a;
		d = 1;
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	blq(a, c, b, d);
}
