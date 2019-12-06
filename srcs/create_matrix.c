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

/*
 * Функция принимает сохранённые тетраминки, их число и размер карты
 *
 * Возвращает матрицу для алгоритма х
 * */

t_ring	*create_matrix(int *storage, int tetrnom, int size)
{
	t_ring	*root;
	int		i;

	if (!(root = matrix_generator(size)))
		return (NULL);
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, size, storage[i], i);
		i++;
	}
	return (root);
}
