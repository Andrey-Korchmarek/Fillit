/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:00:55 by mashley           #+#    #+#             */
/*   Updated: 2019/11/07 15:57:46 by io               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_etris	*read_and_validation(const int fd)
{
	char	buff[22];
	int		ret;
	int 	*storage; /* I've changed sklad to storage */
	char 	cur;
	t_etris	*list;

	cur = 'A';
	list = NULL;
	storage = (int*)malloc(sizeof(int) * 6);
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';

		if (!(storage = validation(buff)))
			exit(0);
		else
		{
			ft_tetadd(&list, ft_tetnew(storage, cur++));
		}
	}
	return (list);
}