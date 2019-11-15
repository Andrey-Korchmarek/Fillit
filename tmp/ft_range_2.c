/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:43:58 by mashley           #+#    #+#             */
/*   Updated: 2019/09/06 12:34:31 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min1, int max1, int min2, int max2)
{
	int *run;
	int i;
	int j
	int mm1;
	int mm2;

	if (max1 <= min1 || max2 <= min2)
		return (NULL);
	run = (int*)malloc(sizeof(int) * (max1 - min1) * (max2 - min2));
	if (!run)
		return (NULL);
	i = 0;
	mm1 = max1 - min1;
	mm2 = max2 - max1;
	while (i < mm1)
	{
		run[i] = min;
		min++;
		i++;
	}
	return (run);
}
