/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_hide_column.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:54:00 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:54:03 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_hide_column(t_dance *hat, matrix **answer)
{
	while (hat->letter != '@')
		hat = hat->down;
	matrix_add_column(answer, hat);
	hat->left->right = hat->right;
	hat->right->left = hat->left;
	hat = hat->down;
	while (hat->letter != '@')
	{
		hat->left->right = hat->right;
		hat->right->left = hat->left;
		hat = hat->down;
	}
}
