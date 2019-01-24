/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:28:30 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/07 15:25:14 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_maximum(int i, char *str, int j, int sign)
{
	if (j >= 214748364)
	{
		if (j > 214748364)
		{
			if ('0' <= str[i + 1] && str[i + 1] <= '9')
				return (0);
		}
		else if (sign == -1)
		{
			if (str[i + 1] == '9')
				return (0);
		}
		else if (str[i + 1] == '8' || str[i + 1] == '9')
			return (0);
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int i;
	int j;
	int sign;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		j = j * 10 + (str[i] - 48);
		if (test_maximum(i, str, j, sign) == 0)
			return (0);
		i++;
	}
	return (j * sign);
}
