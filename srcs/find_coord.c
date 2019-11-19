/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:46:46 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:46:50 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char find_coord(matrix *answer, int x, int y)
{
	while (answer->current->right)
	{
		if (answer->current->x == x && answer->current->y == y)
			return (answer->current->letter);
		answer->current = answer->current->right;
	}
	return ('.');
}
