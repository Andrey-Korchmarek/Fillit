/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/01 12:01:34 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

	int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3, 0, 0, 0, 3}, /* */
							   {0, 1, 0, 2, 1, 0, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 1, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 2, 0, 0, 1, 2},
							   {0, 1, 1, -1, 1, 0, 0, 1, 1, 1},
							   {0, 1, 1, 0, 1, 1, 0, 0, 1, 1}, /*square*/
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
	int		fd; 
	int		i;
	int		size;
	int		count;
	int		storage[26];

	count = 0;
	i = 0;
	while (i < 2)
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
	fillit(fd, storage, &count);
	printf("{main after fillit, count %d}\n", count);
	printf("{main  after fillit - 3}\n");
	backtrack(&count, storage, map);
	printf("{main after backtrack 4}\n");
	i = 0;
	while (i < 7)
	{
		printf("%s\n", map[i]);
		i++;
	}
	close(fd);
	return (0);
}
