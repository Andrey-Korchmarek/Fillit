/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eight_to_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:00:25 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 18:00:28 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*eight_to_six(int *valtet)
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
