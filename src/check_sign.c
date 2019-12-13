/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:36:58 by mashley           #+#    #+#             */
/*   Updated: 2019/12/10 15:20:26 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_sign(char *tetr)
{
	int len;

	len = ft_strlen(tetr);
	if (ft_strcount(tetr, '.') != 12)
		return (0);
	if (ft_strcount(tetr, '#') != 4)
		return (0);
	if (ft_strcount(tetr, '\n') != (len / 5 + len % 5))
		return (0);
	if (tetr[4] != '\n' || tetr[9] != '\n' ||
		tetr[14] != '\n' || tetr[19] != '\n')
		return (0);
	return (1);
}
