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
	int		storage[26];
	int		count;

	/*if (!(storage = (int*)malloc(sizeof(int) * 26)))
		return (NULL);*/
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
		{
			ft_putstr("error\n");
			return ("NULL");
		}
	}
	result = recur(storage, count);
	return (result);
}
