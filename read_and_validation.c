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

int	read_and_validation(int fd)
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
		simple_validation(buff);
		if (validation(buff))
		{
			sklad[i] = ft_strsplit(buff, '\n');
			i++;
		}
		else
			return (0);
	}
	return (1);
}