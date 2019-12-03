/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_and_output.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:50:04 by mashley           #+#    #+#             */
/*   Updated: 2019/12/03 17:50:08 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

matrix *calculation_and_output(int *storage, int tetnom)
{
	matrix	*root;
	int		size;
	int		res;

	res = 0;
	size = min_map(tetnom);
	while (!res)
	{
		root = create_matrix(storage, tetnom, size);
		res = 1;
	}
	return (root);
}
