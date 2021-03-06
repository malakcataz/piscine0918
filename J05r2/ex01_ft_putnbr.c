/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:17:29 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/10 20:18:09 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		nb = 8;
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 99 && nb != -2147483648)
		ft_putnbr(nb / 10);
	else if (nb > 9)
		ft_putchar(nb / 10 + 48);
	ft_putchar(nb % 10 + 48);
}
