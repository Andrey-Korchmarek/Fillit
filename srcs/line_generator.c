/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:45:51 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 10:45:55 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_dance	*line_generator(char count, int *coordinates)
{
	matrix *head;
	t_dance	*tmp;
	int 	i;

	head = matrix_create();
	matrix_add_right(head, ft_dannew(count, -1, 0));
	i = 0;
	while (i < 8)
	{
		tmp = ft_dannew(count, coordinates[i], coordinates[i + 1]);
		matrix_add_right(head, tmp);
		i += 2;
	}
	return (head->current);
}
