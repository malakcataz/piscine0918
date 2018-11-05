/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatriar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 06:11:31 by spatriar          #+#    #+#             */
/*   Updated: 2018/09/16 23:06:09 by spatriar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int l_dest;
	unsigned int l_src;

	i = 0;
	j = 0;
	l_src = 0;
	l_dest = 0;
	if (size == 0)
		return (0);
	while (src[l_src])
		l_src++;
	while (dest[l_dest])
		l_dest++;
	if (l_dest >= size)
		return (size + l_src);
	i = l_dest;
	while (src[j] && (i + 1 < size))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (l_dest + l_src);
}
