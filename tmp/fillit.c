/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:26:45 by aelphias          #+#    #+#             */
/*   Updated: 2019/10/29 12:35:22 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(int fd)
{
	char	*result;
	int		ret;
	char	buff[22];
	t_etris	*list;
	char 	count;

	list = NULL;
	count = 'A';
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';
		if (validation(buff))
		{
			safe(&list, buff, count);
			count++;
		}

		else
		{
			ft_putstr("error\n");
			return (NULL);
		}
	}
	result = NULL;
	return (result);
}