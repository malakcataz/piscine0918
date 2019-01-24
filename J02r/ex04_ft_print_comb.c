/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 06:39:41 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/04 18:51:46 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	cdu(int u, int d, int c)
{
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	ft_putchar(u + 48);
	if (c < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int u;
	int d;
	int c;

	u = 2;
	d = 1;
	c = 0;
	while (c <= 7)
	{
		while (d <= 8)
		{
			while (u <= 9)
			{
				cdu(u, d, c);
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}
