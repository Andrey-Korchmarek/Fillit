/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:37:52 by mashley           #+#    #+#             */
/*   Updated: 2019/11/15 12:37:57 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_add_line(matrix **root, matrix *line)
{
	matrix	*hat;

	matrix_add_down(*root, line->current);
	hat = matrix_create();
	hat->current = (*root)->current->right;
	line->current = line->current->right;
	while (hat->current->x != line->current->x ||
	hat->current->y != line->current->y)
		hat->current = hat->current->right;
	matrix_add_down(hat, line->current);
	line->current = line->current->right;
	while (hat->current->x != line->current->x ||
		   hat->current->y != line->current->y)
		hat->current = hat->current->right;
	matrix_add_down(hat, line->current);
	line->current = line->current->right;
	while (hat->current->x != line->current->x ||
		   hat->current->y != line->current->y)
		hat->current = hat->current->right;
	matrix_add_down(hat, line->current);
	line->current = line->current->right;
	while (hat->current->x != line->current->x ||
		   hat->current->y != line->current->y)
		hat->current = hat->current->right;
	matrix_add_down(hat, line->current);
	line->current = line->current->right;
}
