/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:52:37 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/17 23:52:57 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (0);
	while (to_find[j])
		j++;
	while (str[i++])
	{
		l = 0;
		k = 0;
		while (str[i + l] == to_find[k])
		{
			if (k == j - 1)
				return (&str[i + l - k]);
			k++;
			l++;
		}
	}
	return (&to_find[j]);
}
