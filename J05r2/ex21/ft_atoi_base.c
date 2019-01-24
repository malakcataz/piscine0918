/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:42:46 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/18 11:53:27 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j++ < i)
	{
		while (k++ < i)
		{
			if (j == k)
				k++;
			if (k == i)
				break ;
			if (base[j] == base[k])
				return (0);
		}
		k = 0;
	}
	return (1);
}

int		check_str_compatible(char *str, char *base)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str[j] && base[k])
	{
		if (str[j] == '+' || str[j] == '-')
			return (j);
		if (str[j] == base[k])
		{
			k = 0;
			j++;
		}
		else
			k++;
	}
	if (str[j] && !base[k])
		return (0);
	return (j);
}

int		power_l(int power, int l)
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = l * result;
		power--;
	}
	return (result);
}

int		tr_base(char *str, char *base, int l)
{
	int		i;
	int		k;
	int		result;
	int		imax;
	int		cint;

	i = 0;
	result = 0;
	imax = check_str_compatible(str, base);
	while (i < imax)
	{
		k = 0;
		while (base[k] != str[i])
			k++;
		cint = k;
		cint = (power_l(imax - 1 - i, l) * cint);
		result = result + cint;
		i++;
	}
	return (result);
}

int		ft_atoi_base(char *str, char *base)
{
	int l;
	int b;
	int sign;

	b = 0;
	sign = 1;
	l = 0;
	while (str[b] <= 32 || str[b] == 127)
		b++;
	if (str[b] == '-' || str[b] == '+')
	{
		if (str[b] == '-')
			sign = -1;
		b++;
	}
	str = &str[b];
	while (base[l])
	{
		if (base[l] == '+' || base[l] == '-')
			return (0);
		l++;
	}
	if (!check_base(base, l) || l < 2 || !check_str_compatible(str, base))
		return (0);
	return (tr_base(str, base, l) * sign);
}
