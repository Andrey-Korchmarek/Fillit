/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:08:26 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/25 16:14:24 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3, 0, 0, 0, 3}, /* */
							   {0, 1, 0, 2, 1, 0, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 1, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 2, 0, 0, 1, 2},
							   {0, 1, 1, -1, 1, 0, 0, 1, 1, 1},
							   {0, 1, 1, 0, 1, 1, 0, 0, 1, 1},
							   {0, 1, 1, 1, 1, 2, 0, 0, 1, 2},
							   {1, -2, 1, -1, 1, 0, 0, 2, 1, 0},
							   {1, -1, 1, 0, 1, 1, 0, 1, 1, 1},
							   {1, 0, 1, 1, 1, 2, 0, 0, 1, 2},
							   {0, 1, 1, 0, 2, 0, 0, 0, 2, 1},
							   {0, 1, 1, 1, 2, 1, 0, 0, 2, 1},
							   {1, -1, 1, 0, 2, -1, 0, 1, 2, 0},
							   {1, 0, 1, 1, 2, 1, 0, 0, 2, 1},
							   {1, -1, 1, 0, 2, 0, 0, 1, 2, 0},
							   {1, 0, 1, 1, 2, 0, 0, 0, 2, 1},
							   {1, 0, 2, -1, 2, 0, 0, 1, 2, 0},
							   {1, 0, 2, 0, 2, 1, 0, 0, 2, 1},
							   {1, 0, 2, 0, 3, 0, 0, 0, 3, 0}};

void	calculation(int id, char map[16][17])
{
	int *coord;
	char num;
	int i;
	int x;
	int y;

	coord = g_tetramines[id];
	i = 0;
	x = 0;
	y = 0;
	num = 'A';
	map[x][y] = num;
	while (i < 6)
	{
 		map[x + coord[i]][y + coord[i + 1]] = num;
		i += 2;
	}
}

int main(int argc, char **argv)
{
	char map[16][17];
	int fd;
	int i;
	int size;
	
	int id;

	size = 16;
	i = 0;
	id = 0;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	i = 0;
	id = fillit(fd);
	printf("{ main() id: %d  }\n", id);
	gen_map(map);
	calculation(id, map);
 	while (i < size)
     {
        printf("%s\n", map[i]); 
        i++;       
     }
	close(fd);
	return (0);
}
