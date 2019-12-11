/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:56:28 by mashley           #+#    #+#             */
/*   Updated: 2019/12/11 14:50:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*get_coord(int x, int y, int form)
{
	int	*c;
	int	*result;

	result = (int*)malloc(sizeof(int) * 8);
	c = g_t[form];
	result[0] = x;
	result[1] = y;
	result[2] = x + c[0];
	result[3] = y + c[1];
	result[4] = x + c[2];
	result[5] = y + c[3];
	result[6] = x + c[4];
	result[7] = y + c[5];
	return (result);
}
