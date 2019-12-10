/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:56:28 by mashley           #+#    #+#             */
/*   Updated: 2019/12/10 16:14:02 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int *get_coord(int x, int y, int form)
{
	extern int g_tetr[19][10];
	int *c;
	int *result;

	result =(int*)malloc(sizeof(int) * 8);
	c = g_tetr[form];
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