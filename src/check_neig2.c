/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_neig2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:57:59 by mashley           #+#    #+#             */
/*   Updated: 2019/11/16 18:54:38 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_neig2(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 3;
	valid = 0;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (tetr[i][j] == '#')
			{
				if (j > 0 && tetr[i][j - 1] == '#')
					valid++;
				if (i > 0 && tetr[i - 1][j] == '#')
					valid++;
			}
			j--;
		}
		i--;
	}
	return (valid);
}
