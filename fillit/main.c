/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/28 17:35:07 by aelphias         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	char	map[16][17]; /*gen_map*/
	//char	storage[26]; /*fillit*/
	int		fd; /*read()*/
	int		i;
	int		size;
	int		count;
	char 	storage[27];

	*storage = *ft_strnew(26);
	ft_memset(&storage, 't', 26);
	i = 0;
	while (i < 26)
	{
		printf("%c\n", storage[i]);
		i++;
	}
	
	i = 0;
	size = 16;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	printf("{main fd = %d}\n", fd);
	printf("{main 1}\n");
	gen_map(map);
	printf("{main - after gen_map - 2}\n");
	count = fillit(fd, storage);
	printf("{main  after fillt 3}\n");
	backtrack(count, storage, map);
	printf("{main after backtrack 4}\n");
	close(fd);
	return (0);
}
