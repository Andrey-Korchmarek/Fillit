/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add_down.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:19:20 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 11:19:24 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void matrix_add_down(matrix *hat, t_dance *tmp)
{
	t_dance *prev;

	prev = NULL;
	if (hat->current == NULL)
	{
		hat->current = tmp;
	}
	else
	{
		prev = hat->current->up;
		tmp->down = hat->current;
		tmp->up = prev;
		prev->down = tmp;
		hat->current->up = tmp;
		free(prev);
		prev = NULL;
	}
	hat->size++;
}
