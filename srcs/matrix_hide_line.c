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

void	matrix_hide_line(t_dance *head)
{
	if (!head)
		return ;
	while (head->x != -1)
		head = head->right;
	head->x = -2;
	head = head->right;
	while (head->x >= 0)
	{
		head->down->up = head->up;
		head->up->down = head->down;
		head = head->right;
	}
}
