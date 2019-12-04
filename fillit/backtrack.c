/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/04 15:18:26 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int min_a(int *count) // "a" means a side of map square
{
    int i;

    i = 10;
    while(i * i < 4 * *count) /* How on earth does it work?)*/
        ++i;
    printf("{ min_a = %d }\n", i - 1);
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

int    insert(char abc, int *coord, char map[16][17], int a)
{   
    int y;
    int x;

    y = 0;
    while (y <= a )
    {
        x = 0;
	    while (x <= a)
        {
            if (y + coord[0] < a && x + coord[1] < a && y + coord[2] < a && x + coord[3] < a && y + coord[4] < a &&
            x + coord[5] < a && map[y][x] == '.' && map[coord[0]][coord[1]] == '.' &&
            map[coord[2]][coord[3]] == '.'  && map[coord[4]][coord[5]] == '.'
            &&  y + coord[0] > 0 && x + coord[1] > 0 
            && y + coord[2] > 0 && x + coord[3] > 0 
            && y + coord[4] > 0 && x + coord[5] > 0 )
            {
                map[y][x] = abc;
    	        map[y + coord[0]][x + coord[1]] = abc;
    	        map[y + coord[2]][x + coord[3]] = abc;
    	        map[y + coord[4]][x + coord[5]] = abc;
                return (0); 
            }
            x++; 
        }
        y++;
    }
    return (1);
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

void    backtrack(int *count, int storage[26], char map[16][17])
{
    extern int g_tetramines[19][10];
    int i;
    int a;
    int j;
 
 //   int n;
   
    printf("backtrack count = %d\n", *count);
    a = min_a(count);
    i = 0;
    j = 0;
    i = 0;
    
    insert('A', g_tetramines[storage[0]], map, a);
    print(a, map);
} 