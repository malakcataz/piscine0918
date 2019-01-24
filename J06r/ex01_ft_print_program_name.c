/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:23:47 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/18 10:51:26 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_name(char *name)
{
	int i;

	i = 0;
	while (name[i])
	{
		ft_putchar(name[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	print_name(argv[0]);
	ft_putchar('\n');
	return (0);
}
