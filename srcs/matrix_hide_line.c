/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_hide_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:55:20 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:55:23 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_hide_line(t_dance *head, matrix **lines)
{
	while (head->x != -1)
		head = head->right;
	matrix_add_down(*lines, head);
	head->down->up = head->up;
	head->up->down = head->down;
	head = head->right;
	while (head->x != -1)
	{
		head->down->up = head->up;
		head->up->down = head->down;
		head = head->right;
	}
}
