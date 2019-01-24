/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:05:32 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/09 16:11:31 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	if (nb > 1)
	{
		i = 2;
		while (i <= (nb / i))
		{
			if ((nb % i) != 0)
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if ((nb % 2) == 0)
		nb++;
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 2));
}
