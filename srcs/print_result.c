/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:57:00 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:57:02 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	print_result(matrix *answer, int size)
{
	char	**result;
	int 	i;
	int 	j;

	result = (char**)malloc(sizeof(char)*size*(size +1));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			result[i][j] = find_coord(answer, i, j);
			j++;
		}
		result[i][size] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_putstr(result[i]);
		ft_putstr("\n");
		i++;
	}
	i = 0;
	while (i < size)
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	result = NULL;
}
