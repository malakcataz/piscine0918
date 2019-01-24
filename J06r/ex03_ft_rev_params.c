/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:46:51 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/15 21:52:22 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_rev_params(char **param)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (param[j])
		j++;
	j--;
	while (j - k > 0)
	{
		i = 0;
		while (param[j - k][i])
		{
			ft_putchar(param[j - k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	print_rev_params(argv);
	return (0);
}
