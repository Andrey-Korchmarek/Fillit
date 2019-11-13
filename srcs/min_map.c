/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:04:41 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 20:04:43 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int min_map(int count)
{
	int i;

	i = 4;//Временно
	while (i * i < 4 * count)
		i++;
	return (i);
}