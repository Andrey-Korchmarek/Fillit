/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/12/11 14:34:07 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd, int id[26][2], int *count)
{
	int			ret;
	char		buff[22];
	char		abc;

	abc = 'A';
	while ((ret = read(fd, buff, 21)) && (*count < 26))
	{
		buff[ret] = '\0';
		if (validation(buff))
		{
			id[*count][0] = identify_tetr(buff);
			id[*count][1] = abc++;
			*count += 1;
		}
		else
			return (-1);
	}
	if ((ft_strlen(buff) != 20))
		return (-1);
	return (0);
}
