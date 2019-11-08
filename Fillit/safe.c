/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:23:41 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 12:23:45 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

static	int		*coordinates(char **tetr)
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

static	int		*eight_to_six(int *valtet)
{
	int *tmp;
	int i;

	tmp = (int*)malloc(sizeof(int) * 6);
	i = 2;
	while (i < 8)
	{
		tmp[i - 2] = valtet[i];
		i++;
	}
	free(valtet);
	return (tmp);
}

void			safe(t_etris **list, char *tetr, char count)
{
	char	**tmp;
	int		*valtet;

	tmp = ft_strsplit(tetr, '\n');
	valtet = eight_to_six(coordinates(tmp));
	ft_tetadd(list, ft_tetnew(valtet, count));
}
