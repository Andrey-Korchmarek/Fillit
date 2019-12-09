/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/09 17:58:24 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

 /* idea board starting size =
  sqrt(# of tetrominoes * 4 characters per tetromino)
  
  i = 2 will be , minimal square 2*2 */
 int min_a(int *count) // "a" means a side of map square
{
    int i;
    
    i = 2;
    while(i * i < 4 * *count)
        ++i;
    printf("{ min_a() min_a = %d \n", i - 1);
    return (i - 1);
} 

void clean_map(char map[16][17])
{
     int i;

     i = 0;
     while (i < 16)
    {
        ft_memset(map[i], '.', 16);
        i++;
    }
}

void print(int a, char map[16][17])
{
    int i;
    int j;
    
    i = 0;
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
}

int check_borders(int y, int x, int a, int *coord)
{   
    if (y + coord[0] >= 0 && y + coord[0] <= a &&
    y + coord[2] >= 0 && y + coord[2] <= a &&
    y + coord[4] >= 0 && y + coord[4] <= a &&
    x + coord[1] >= 0 && x + coord[1] <= a &&
    x + coord[3] >= 0 && x + coord[3] <= a &&
    x + coord[5] >= 0 && x + coord[5] <= a )
        return (1);
    return (0);
}

int check_dots(int y, int x, int *coord, char map[16][17])
{
    if (map[y][x] == '.' &&
        map[y + coord[0]][x + coord[1]] == '.' &&
        map[y + coord[2]][x + coord[3]] == '.' &&
        map[y + coord[4]][x + coord[5]] == '.')
            return (1);
        return(0);
}

int     backtrack(int *count, int storage[26], char map[16][17], char c)
{
    extern int g_tetramines[19][10];
   
    int x = 0;
    int y = 0;
    int a;
    int *coord;
    int i;

    i = 0;
    a = min_a(count);
    coord = g_tetramines[storage[c - 'A']]; /* c = 'A';
     c - 'A' = 000 - null in ascii table so we count from 0, from the beginning.*/
     printf("{ backtrack } count=%d", *count);
    if (*count == 0)
        return (1);
    while (y <= a)
    {
        while (x <= a)
        {
            x = 0;
            if (check_borders(y, x, a, coord) && check_dots(y, x, coord, map))
            {
                map[y][x] = c;
                map[y + coord[0]][x + coord[1]] = c;
                map[y + coord[2]][x + coord[3]] = c;
                map[y + coord[4]][x + coord[5]] = c;
                if (backtrack(count - 1, storage, map, ++c))
                    return (1);
            }
            map[y][x] = '.';
            map[y + coord[0]][x + coord[1]] = '.';
            map[y + coord[2]][x + coord[3]] = '.';
            map[y + coord[4]][x + coord[5]] = '.';
            ++x;
        }
        ++y;
    }
    return (0);
}
