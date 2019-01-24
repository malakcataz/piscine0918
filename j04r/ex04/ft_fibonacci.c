/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:29:40 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/08 22:36:57 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int	element;

	if (index < 0)
		element = -1;
	if (index == 0)
		element = 0;
	if (index == 1)
		element = 1;
	if (index >= 2)
		element = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (element);
}
