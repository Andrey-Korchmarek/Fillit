/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:59:09 by mashley           #+#    #+#             */
/*   Updated: 2019/12/12 11:56:34 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*first(char **tetr)
{
	int i;
	int j;
	int *first;

	first = (int*)malloc(sizeof(int) * 2);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr[i][j] == '#')
			{
				first[0] = i;
				first[1] = j;
				return (first);
			}
			j++;
		}
		i++;
	}
	return (first);
}
