/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 10:52:20 by stsong            #+#    #+#             */
/*   Updated: 2018/09/09 23:02:52 by tfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sudoku_display(char tab[][9])
{
	int count;
	int count2;

	count = 0;
	while (count < 9)
	{
		count2 = 0;
		while (count2 < 9)
		{
			write(1, &tab[count][count2], 1);
			if (count2 <= 7)
				write(1, " ", 1);
			count2++;
		}
		write(1, "\n", 1);
		count++;
	}
}
