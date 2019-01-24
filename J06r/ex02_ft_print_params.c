/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:37:31 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/15 21:43:41 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_param(char **param)
{
	int i;
	int j;

	j = 1;
	while (param[j])
	{
		i = 0;
		while (param[j][i])
		{
			ft_putchar(param[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	print_param(argv);
	return (0);
}
