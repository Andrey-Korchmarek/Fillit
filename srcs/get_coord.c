/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:56:28 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 19:56:32 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Функция принимает кординаты начала тетраминки и её форму
 *
 * Возвращает координаты всех элементов тетраминки
 * */

int	*get_coord(int x, int y, int form)
{
	extern int	g_tetramines[19][10];
	int			*c;
	int			*result;

	result =(int*)malloc(sizeof(int) * 8);
	c = g_tetramines[form];
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
