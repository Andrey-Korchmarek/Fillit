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
	int 	i;

	if (!root || !*root || !line)
		return ;
	while (line->current->x != -1)
		line->current = line->current->left;
	matrix_add_down(*root, line->current);
	hat = matrix_create();
	hat->current = (*root)->current->right;
	line->current = line->current->right;
	i = 0;
	while (i < 4)
	{
		while (hat->current->x != line->current->x ||
			   hat->current->y != line->current->y)
			hat->current = hat->current->right;
		matrix_add_down(hat, line->current);
		line->current = line->current->right;
		i++;
	}
//
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
}
