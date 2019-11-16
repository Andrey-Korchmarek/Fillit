/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_neig1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:36:13 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 18:36:18 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	check_neig1(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 0;
	valid = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr[i][j] == '#')
			{
				if (j < 3 && tetr[i][j + 1] == '#')
					valid++;
				if (i < 3 && tetr[i + 1][j] == '#')
					valid++;
			}
			j++;
		}
		i++;
	}
	return (valid);
}
