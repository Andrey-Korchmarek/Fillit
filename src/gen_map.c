/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:42:42 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/10 16:10:21 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	gen_map(char map[16][17])
{
	int	size;
	int	i;

	size = 16;
	i = 0;
	while (i < size)
	{
		map[i][size] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_memset(map[i], '.', size);
		i++;
	}
}
