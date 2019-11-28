/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/28 17:15:41 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd, char storage[26])
{
	int		ret;
	char	buff[22];
	int		i;/*debug*/
	int		count;

	i = 0;
	count = 0;
		printf("{fillit - storage before read= %c}\n", storage[0]);
	while ((ret = read(fd, buff, 21)) && (count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[count] = check_tetr(buff)))
				count++;
		}
		else
		return (-1);
		printf("{fillit - count = %d}\n", count);
		printf("{fillit - storage = %c}\n", storage[0]);
	}
		if ((ft_strlen(buff) != 20))
			return(-1);
	return(count);
}
