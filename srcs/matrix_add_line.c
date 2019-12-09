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

#include "../includes/fillit.h"

/*
 * Функция принимает две матрицы
 *
 * Добавляет строку в матрицу снизу
 * */

void	matrix_add_line(t_ring **root, t_ring *line)
{
	t_ring	*hat;

	matrix_add_down(*root, line->current);
	hat = matrix_new();
	hat->current = (*root)->current->right;
	line->current = line->current->right;
	while (line->current->x != -1)
	{
		while (hat->current->x != line->current->x ||
				hat->current->y != line->current->y)
			hat->current = hat->current->right;
		matrix_add_down(hat, line->current);
		line->current = line->current->right;
	}
	free(hat);
	free(line);
}
