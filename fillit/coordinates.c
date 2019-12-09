/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:59:09 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 17:59:13 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*coordinates(char **tetr)
{
	int i;
	int j;
	int count;
	int *valtet;

	valtet = (int*)malloc(sizeof(int) * 8);
	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr[i][j] == '#')
			{
				if (!count)
				{
					valtet[count] = i;
					valtet[count + 1] = j;
					count += 2;
				}
				else
				{
					valtet[count] = i - valtet[0];
					valtet[count + 1] = j - valtet[1];
					count += 2;
				}
			}
			j++;
		}
		i++;
	}
	return (valtet);
}
