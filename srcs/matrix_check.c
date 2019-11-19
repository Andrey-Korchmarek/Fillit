/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:52:54 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:52:59 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int matrix_check(matrix *root, matrix *answer)
{
	if (root->current->right == root->current)
		return (1);
	if (root->current->down == root->current)
		return(0);
	if (answer->size == root->size * 4)
		return (1);
	return (-1);
}
