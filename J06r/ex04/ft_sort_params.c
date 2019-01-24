/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 00:58:35 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/18 11:25:58 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_param(char **param)
{
	int	i;
	int	j;

	i = 1;
	while (param[i])
	{
		j = 0;
		while (param[i][j])
		{
			ft_putchar(param[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		str_comp(char *parami, char *parami1)
{
	int		j;

	j = 0;
	while (parami[j] == parami1[j] && parami[j] && parami1[j])
		j++;
	if (parami[j] > parami1[j])
		return (1);
	return (0);
}

void	ft_sort_params(int nb, char **param)
{
	char	*taxi;
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (k < nb)
	{
		i = 1;
		while (i + 1 < nb - k)
		{
			if (str_comp(param[i], param[i + 1]))
			{
				taxi = param[i];
				param[i] = param[i + 1];
				param[i + 1] = taxi;
			}
			i++;
		}
		k++;
	}
	print_param(param);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	ft_sort_params(argc, argv);
	return (0);
}
