/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:59:09 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 17:59:13 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	*fitst(char **tetr)
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
				return(first);
			}
			j++;
		}
		i++;
	}
	return (first);
}
