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

matrix	*fillit(int fd, int *count)
{
	matrix	*result;
	int		ret;
	char	buff[22];
	int		storage[26];
	matrix *error;

	error = matrix_create();
	/*if (!(storage = (int*)malloc(sizeof(int) * 26)))
		return (error);*/
	while ((ret = read(fd, buff, 21)) && (*count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[*count] = check_tetr(buff)) != -1)
				(*count)++;
		}
		else
			return (error);
	}
	if ((ft_strlen(buff) != 20))
		return (error);
	result = create_matrix(storage, *count);
	return (result);
}
