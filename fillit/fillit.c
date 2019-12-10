/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/12/10 12:21:58 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fillit(int fd, int	storage[26][2], int *count)
{
	int		ret;
	char	buff[22];
	int		i;/*debug*/
	char 	abc;
	extern int g_tetramines[19][10];

	printf("I'm here from fillit 1 \n");
	i = 0;
	abc = 'A';
	while ((ret = read(fd, buff, 21)) && (*count < 26))
	{
		buff[ret] = '\0';
		printf("fillit buff=\n%s", buff);
		if (validation(buff))
		{
			storage[*count][0] = check_tetr(buff); // rename what tetr
			storage[*count][1] = abc++;
			*count += 1;
			printf("{ fillit } - writing cycle to storage\n");
		}
		else
			return (-1);
		printf("{fillit - count = %d\n}", *count);
	}
	printf("I'm from fillit figure coordinates:\n");
	i = -1;
	printf("\n");
		if ((ft_strlen(buff) != 20))
			return(-1);
	return(0);
}
