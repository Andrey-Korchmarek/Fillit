/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:00:55 by mashley           #+#    #+#             */
/*   Updated: 2019/11/02 18:19:01 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft_mashley/libft.h"

int	read_and_validation(const int fd)
{
	char	buff[22];
	int		ret;
	char 	**storage; /* I've changed sklad to storage */
	int		i;

	i = 0;
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';
		printf("%s\n", buff);
		simple_validation(buff);
		if (validation(buff))
		{
			storage[i] = ft_strsplit(buff, '\n');
			i++;
			printf("%s\n", storage[i]);
		}
		else
			return (0);
	}
	return (1);
}