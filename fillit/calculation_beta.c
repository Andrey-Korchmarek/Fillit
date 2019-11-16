/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_beta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:20:02 by mashley           #+#    #+#             */
/*   Updated: 2019/11/16 18:51:37 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*calculation_beta(int *storage, int tetrnom)
{
	matrix *root;
	int i;

	if (!(root = matrix_generator(min_map(tetrnom))))
		return (NULL);
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, min_map(tetrnom), storage[i], i);
		i++;
	}
	matrix_print(root);
	return ("calculation_beta");
}
