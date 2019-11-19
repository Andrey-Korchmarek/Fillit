/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add_column.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:51:49 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:51:56 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_add_column(matrix **root, t_dance *column)
{
	if ((*root)->current->down == (*root)->current)
		matrix_add_down(*root, ft_dannew('.', -1, 0));
	matrix_add_right(*root, column);
	(*root)->current = (*root)->current->down;
	matrix_add_right(*root, column->down);
	(*root)->current = (*root)->current->up;
}
