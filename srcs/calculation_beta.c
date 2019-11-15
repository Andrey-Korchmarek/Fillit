/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_beta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:20:02 by mashley           #+#    #+#             */
/*   Updated: 2019/11/15 14:20:07 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char	*calculation_beta(int *storage, int len)
{
	int	i;
	matrix *root;
	int size;

	size = min_map(len);
	root = matrix_generator(size);
	i = 0;
	while (i < len)
	{
		//coord = get_coordinates(size, storage[i]);
		matrix_add_line(&root, line_generator('A' + i, size, storage[i]));
		i++;
	}
	return (NULL);
}
