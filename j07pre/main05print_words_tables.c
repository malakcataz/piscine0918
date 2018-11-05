/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05print_words_tables.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 04:12:26 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/19 04:17:38 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split_whitespaces(char *str);

int	main(void)
{
	char str[]= " bla  la    li   ";
	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}
