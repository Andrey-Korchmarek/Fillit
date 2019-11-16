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
tmp->right = tmp->left = tmp->up = tmp->down = tmp;
}
else
{
tmp->down = hat->current;
tmp->up = hat->current->up;
hat->current->up->down = tmp;
hat->current->up = tmp;
}
hat->size++;
}
