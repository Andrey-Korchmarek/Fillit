/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 17:31:10 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char	*fillit(int fd)
{
	char	*result;
	int		ret;
	char	buff[22];
	int 	*list;
	char	count;

	if (!(list = (int*)malloc(26)))
		return (NULL);
	count = 'A';
	while ((ret = read(fd, buff, 21)) && (count <= 'Z'))
	{
		buff[ret] = '\0';
		if (validation(buff))
		{
			safe(&list, buff);
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
