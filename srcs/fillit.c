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

#include "../includes/fillit.h"

int	fillit(int fd)
{
	t_ring	*result;
	int		*storage;
	int		count;

	count = 0;
	if (!(storage = read_and_validation(fd, &count)))
		return (0);
	result = calculation_and_output(storage, count);
	free(storage);
	matrix_delete(result);
	return (1);
}
