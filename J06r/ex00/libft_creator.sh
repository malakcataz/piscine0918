# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spatriar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:05:38 by spatriar          #+#    #+#              #
#    Updated: 2018/09/18 02:35:25 by spatriar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c 
ar rc libft.a *.o 
ranlib libft.a