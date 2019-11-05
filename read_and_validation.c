/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:00:55 by mashley           #+#    #+#             */
/*   Updated: 2019/11/02 19:27:27 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	read_and_validation(const int fd)
{
	char	buff[22];
	int		ret;
	int 	*storage; /* I've changed sklad to storage */
	int		i;

	i = 0;
	storage = (int*)malloc(sizeof(int) * 6);
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';
		printf("%s\n", buff);
		if ((storage = validation(buff)))
		{
			i = 0;
			while (i < 6)
			{
				printf("%d %d\n", storage[i], storage[i + 1]);
				i += 2;
			}
		}
		else
			return (0);
	}
	return (1);
}