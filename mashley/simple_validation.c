/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:07:26 by mashley           #+#    #+#             */
/*   Updated: 2019/11/01 19:07:31 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mashley.h"

int simple_validation(char *tetr)
{
	if (ft_strcount(tetr, '.') != 12)
		return (0);
	if (ft_strcount(tetr, '#') != 4)
		return (0);
	if (ft_strcount(tetr, '\n') != (ret / 20 + ret % 20))
		return(0);
	return (1);
}
