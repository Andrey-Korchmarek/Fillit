/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:52:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 17:52:49 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

matrix*	matrix_new()
{
	matrix *tmp;

	if (!(tmp = (matrix*)malloc(sizeof(matrix))))
		return (NULL);
	tmp->size = 0;
	tmp->current = NULL;
	return (tmp);
}
