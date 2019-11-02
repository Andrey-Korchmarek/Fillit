/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:00:55 by mashley           #+#    #+#             */
/*   Updated: 2019/11/02 19:23:21 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
<<<<<<< HEAD
=======
#include "libft/libft.h"
>>>>>>> 1f85f6f77419e0a850c7a8f5a5b2afa1fe4d8195

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
<<<<<<< HEAD
		if (hard_validation(buff))
=======
		if (simple_validation(buff))
>>>>>>> 1f85f6f77419e0a850c7a8f5a5b2afa1fe4d8195
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