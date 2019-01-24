/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:49:42 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/17 04:14:40 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr_non_printable(char *str)
{
	int		i;
	int		n;
	char	*base_h;
	char	c1;
	char	c2;

	i = 0;
	base_h = "0123456789abcdef";
	while (str[i])
	{
		n = str[i];
		c1 = base_h[n / 16];
		c2 = base_h[n % 16];
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar(c1);
			ft_putchar(c2);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
