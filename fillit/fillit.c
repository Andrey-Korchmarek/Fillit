/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:55:04 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd, int	storage[26], int *count)
{
	int		ret;
	char	buff[22];
	int		i;/*debug*/

	printf("I'm here from fillit 1 \n");
	i = 0;
	while ((ret = read(fd, buff, 21)) && (*count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			printf("I'm here from fillit - reading and writing cycle\n");
			if ((storage[*count] = check_tetr(buff)))
				*count = *count + 1;
		}
		else
		return (-1);
		printf("{fillit - count = %d}", *count);
		printf("{fillit - storage = %d}\n", storage[0]);
	}
	printf("fillit buff=\n%s", buff);
		if ((ft_strlen(buff) != 20))
			return(-1);
	return(0);
}
