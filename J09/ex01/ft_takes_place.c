/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:48:08 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/06 18:51:29 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		ampm;

	ampm = 1;
	if (hour == 11)
		ampm = 3;
	if (hour > 11)
	{
		ampm = 2;
		if (hour != 12)
			hour = hour - 12;
	}
	if (hour == 00)
		hour = 12;
	printf("THE FOLLOWING TAKES PLACE BETEEN %d.00 ", hour);
	if (ampm == 1)
		printf("A.M AND %d.00 AM\n", (hour + 1));
	else if (ampm == 2)
		printf("P.M AND %d.00 PM\n", (hour + 1));
	else
		printf("A.M AND 1.00 PM\n");
}
