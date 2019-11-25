/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/25 14:54:41 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd)
{
	/* char	*result; */
	int		ret;
	char	buff[22];
	int		storage[26];
	int		count;
	int 	i;

	i = 0;
	count = 0;
	while ((ret = read(fd, buff, 21)) && (count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[count] = check_tetr(buff)) != -1)
				count++;
		}
		else
		return (-1);
		/* return ("error\n"); */
	}
		if ((ft_strlen(buff) != 20))
			return(-1);
		/* 	return ("error\n"); */
	//printf("{ret=%i}\n", ret);
	//printf("{buff=%s}\n", buff);
	//calculation(storage[count - 1]);

	//back_track(int storage[])
/* 	while (i < count)
	{
		ft_putnbr(storage[i]);
		ft_putchar('\n');
		i++;
	} */
		while (i < count)
		{
			return (storage[i]);
			printf("{ fillit() storage[0]: %d  }\n", storage[0]);
			i++;
		}
}
