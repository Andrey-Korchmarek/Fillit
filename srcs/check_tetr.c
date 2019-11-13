/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:08:12 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 17:08:16 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	check_tetr(char *tetr)
{
	char	**tmp;
	int		*vt;
	int 	i;
	int 	*a;
	extern int g_tetramines[19][10];

	if (!(tmp = ft_strsplit(tetr, '\n')))
		return (-1);
	vt = first(tmp);
	i = 0;
	while (i < 20)
	{
		a = g_tetramines[i];
		if (tmp[vt[0] + a[0]][vt[1] + a[1]] == '#')
			if (tmp[vt[0] + a[2]][vt[1] + a[3]] == '#')
				if (tmp[vt[0] + a[4]][vt[1] + a[5]] == '#')
					return (i);
		i++;
	}
	return (-1);
}
