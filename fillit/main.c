                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/01 15:19:42 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

	int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3}, /* 0*/     
							   {0, 1, 0, 2, 1, 0},/* 1*/
							   {0, 1, 0, 2, 1, 1},/* 2*/
							   {0, 1, 0, 2, 1, 2},/* 3*/
							   {0, 1, 1, -1, 1, 0},/* 4*/
							   {0, 1, 1, 0, 1, 1}, /*square 5*/
							   {0, 1, 1, 1, 1, 2},/* 6*/
							   {1, -2, 1, -1, 1, 0},/* 7*/
							   {1, -1, 1, 0, 1, 1},/* 8*/
							   {1, 0, 1, 1, 1, 2},/* 9*/
							   {0, 1, 1, 0, 2, 0},/* 10*/
							   {0, 1, 1, 1, 2, 1},/* 11*/
							   {1, -1, 1, 0, 2, -1},/* 12*/
							   {1, 0, 1, 1, 2, 1},/* 13*/
							   {1, -1, 1, 0, 2, 0},/* 14*/
							   {1, 0, 1, 1, 2, 0},/* 15*/
							   {1, 0, 2, -1, 2, 0},/* 16*/
							   {1, 0, 2, 0, 2, 1},/* 17*/
							   {1, 0, 2, 0, 3, 0}};/* 18*/

/* int min_aa(int *count) 
{
    int i;
    
    i = 4;
    while(i * i < 4 * *count) 
        ++i;
    printf("{ min_aa() min_a = %d }\n", i);
    return (i);
}*/
 
void printt(int a, char map[16][17])
{
    int i;
    int j;
    
    i = 0;

	printf("I'm printt 0 ;)\n");
    while (i <= a)
	{
		j = 0;
		while (j <= a)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
		printf("I'm printt 1 ;)\n");
}

int main(int argc, char **argv)
{
	char	map[16][17]; /*gen_map*/
	int		fd; 
	int		i;
	int		count;
	int		storage[26];

	count = 0;
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
	if ((fillit(fd, storage, &count)== -1))
		ft_putstr("error\n");
	printf("{main after fillit, count %d}\n", count);
	printf("{main  after fillit - 3}\n");
	backtrack(&count, storage, map, 'A');
	printt(min_a(&count), map);
	printf("{main after backtrack 4}\n");
	printf("from main. Storage =\n");
		printf(" Number tet in storage:\n ");
	i = -1;
	while (++i < count)
		printf("%d ", storage[i]);
	printf("\n");
	close(fd);
	return (0);
}
