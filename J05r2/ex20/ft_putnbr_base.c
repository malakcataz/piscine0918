/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 07:33:19 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/18 17:18:23 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	tr_base(long nbr, char *base, int l)
{
	char	result[33];
	int		i;
	int		b;

	i = 0;
	while (nbr > 0)
	{
		result[i] = base[nbr % l];
		nbr = nbr / l;
		i++;
	}
	result[i] = '\0';
	b = 0;
	i--;
	while (result[i - b])
	{
		ft_putchar(result[i - b]);
		b++;
	}
}

int		check_base(char *base)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	while (j < i)
	{
		while (k < i)
		{
			if (base[j] == base[k] && j != k)
				return (0);
			k++;
		}
		k = 0;
		j++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	nb;

	nb = nbr;
	l = check_base(base);
	if (l > 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb == 0)
			ft_putchar(base[0]);
		else
			tr_base(nb, base, l);
	}
}
