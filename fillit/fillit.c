/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/27 17:10:38 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd, int count char storage[26])
{
	/* char	*result; */
	int		ret;
	char	buff[22];
	int		i;/*debug*/

	i = 0;
	while ((ret = read(fd, buff, 21)) && (count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[count] = check_tetr(buff))  /*form of  figure*/
				count++;
		}
		else
		return (-1);
	}
		if ((ft_strlen(buff) != 20))
			return(-1);
	return(0);
}
