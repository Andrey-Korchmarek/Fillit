/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:50:42 by mashley           #+#    #+#             */
/*   Updated: 2019/12/03 17:50:45 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	*read_and_validation(int fd, int *count)
{
	int		ret;
	char	buff[22];
	int		*storage;

	storage = (int*)malloc(sizeof(int) * 26);
	while ((ret = read(fd, buff, 21)) && (*count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[*count] = check_tetr(buff)) != -1)
				(*count)++;
		}
		else
			return (NULL);
	}
	if ((ft_strlen(buff) != 20))
		return (NULL);
	return (storage);
}
