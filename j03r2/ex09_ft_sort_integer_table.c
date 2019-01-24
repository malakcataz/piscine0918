/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 03:10:32 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/10 18:24:59 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int exchange;

	i = 0;
	j = 0;
	exchange = 0;
	while (j < size - 1)
	{
		while (i < (size - 1 - j))
		{
			if (tab[i] > tab[i + 1])
			{
				exchange = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = exchange;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
