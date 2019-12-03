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

	/*
	 matrix *result;
	 int count;

	 count = 0;
	 if (!(storage = read_and_validation(fd, &count)))
	 return (0);
	 result = calculation_and_output(storage, count);
	 matrix_delete(result);
	 return (1);
	 *
	 *
	 *
	 * */


	error = matrix_new();
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
	result = create_matrix(storage, *count, min_map(*count));
	result = calculation_and_output(storage, *count);
	return (result);
}
