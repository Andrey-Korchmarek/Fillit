/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coordinates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:56:28 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 19:56:32 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int *get_coordinates(int a, int form)
{
	extern int g_tetramines[19][10];
	int *c;
	int i;
	int j;
	int *result;

	c = g_tetramines[form];
	if (!(result = (int*)malloc(sizeof(int) * 8)))
		return (NULL);
	i = c[6];
	while (i <= (a - c[8]))
	{
		j = c[7];
		while (j <= (a - c[9]))
		{
			result[0] = i;
			result[1] = j;
			result[2] = i + c[0];
			result[3] = j + c[1];
			result[4] = i + c[2];
			result[5] = j + c[3];
			result[6] = i + c[4];
			result[7] = j + c[5];
		}
	}
	return (result);
}