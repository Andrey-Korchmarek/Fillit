/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:36:58 by mashley           #+#    #+#             */
/*   Updated: 2019/11/10 18:37:01 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	check_sign(char *tetr)
{
	int len;

	len = ft_strlen(tetr);
	if (ft_strcount(tetr, '.') != 12)
		return (0);
	if (ft_strcount(tetr, '#') != 4)
		return (0);
	if (ft_strcount(tetr, '\n') != (len / 5 + ret % 5))
		return (0);
	return (1);
}
