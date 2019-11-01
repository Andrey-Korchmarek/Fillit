/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:00:55 by mashley           #+#    #+#             */
/*   Updated: 2019/10/29 15:15:51 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft_mashley/libft.h"

int validation(char *str)
{

	return (0);
}

int	read_validation(int fd)
{
	char	buff[22];
	int		ret;
	char 	**sklad;
	int		i;

	i = 0;
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';
		printf("%s\n", buff);
		if (ft_strcount(buff, '.') != 12)
			return (-1);
		if (ft_strcount(buff, '#') != 4)
			return (-1);
		if (ft_strcount(buff, '\n') != (ret / 20 + ret % 20))
			return(-1);
		if (validation(buff))
		{
			sklad[i] = ft_strsplit(buff, '\n');
			i++;
		}
		else
			return (-1);
	}
	return (0);
}