/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/25 16:47:59 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd)
{
	/* char	*result; */
	int		ret;
	char	buff[22];
	int		count;
	int 	i;
	t_figure storage; 

	i = 0;
	count = 0;
	storage = lst_create(0,0);
	while ((ret = read(fd, buff, 21)) && (count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[count] = check_tetr(buff)) != -1)  /*forme of  figure*/
				count++;
		}
		else
		return (-1);
	
	}
		if ((ft_strlen(buff) != 20))
			return(-1);

		while (i < count)
		{
			return (storage[i]);
			printf("{ fillit() storage[0]: %d  }\n", storage[0]);
			i++;
		}
}
