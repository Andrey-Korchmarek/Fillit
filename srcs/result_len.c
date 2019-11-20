/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:36:52 by mashley           #+#    #+#             */
/*   Updated: 2019/11/20 16:36:55 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

size_t	result_len(matrix *root)
{
	size_t count;

	count = 0;
	root->current = root->current->right;
	while (root->current->letter != '!')
	{
		if (root->current->letter == '^')
			count++;
		root->current = root->current->right;
	}
	return (count);
}
