/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/06 17:07:53 by aelphias         ###   ########.fr       */
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
    while(i * i < 4 * *count) /* How on earth does it work?)*/
        ++i;
    printf("{ min_a = %d }\n", i - 1);
    return (i);
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

int    insert(int *coord, char map[16][17], int a, char abc)
{   
    int y;
    int x;
    
    y = 0;
	printf("{ insert}a=%d\n", a);
    while (y <= a )
    {   
        //printf("{insert} y <= a | y =%d\n", y);
        //printf("{insert} y <= a | x =%d\n", x);
        x = 0;
	    while (x <= a)
        {
        //int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3}, /* 0*/  
        /*
        if (y + coord[0] <= a 
        && x + coord[1] <= a && y + coord[2] <= a 
        && x + coord[3] <= a && y + coord[4] <= a 
        && y + coord[0] >= 0 && x + coord[1] >= 0 
        && y + coord[2] >= 0 && x + coord[3] >= 0 
        && y + coord[4] >= 0 && x + coord[5] >= 0 
        )
        */
	   		printf("y = %d | x = %d\n", y, x);
            if (y + coord[0] >= 0 && y + coord[0] <= a &&
            y + coord[2] >= 0 && y + coord[2] <= a &&
            y + coord[4] >= 0 && y + coord[4] <= a &&
            x + coord[1] >= 0 && x + coord[1] <= a &&
            x + coord[3] >= 0 && x + coord[3] <= a &&
            x + coord[5] >= 0 && x + coord[5] <= a &&
            map[y][x] == '.' &&
            map[y + coord[0]][x + coord[1]] == '.' &&
            map[y + coord[2]][x + coord[3]] == '.' &&
            map[y + coord[4]][x + coord[5]] == '.')
            {   
                printf("y = %d\n", y);
                printf("x = %d\n", x);
                map[y][x] = abc;
                map[y + coord[0]][x + coord[1]] = abc;
                map[y + coord[2]][x + coord[3]] = abc;
                map[y + coord[4]][x + coord[5]] = abc;
                return (1); 
            }
            x++; 
        }
        y++;
    }
    return (0);
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
    int a;
    int n;
    char abc;
    int i;

    i = 0;
    abc = 'A';
    n = 0;
    printf("backtrack count = %d\n", *count);
    a = min_a(count);
    while(n < *count)
    {
        if ((insert(g_tetramines[storage[n]], map, a, abc) == 1))
        {
            a++; // increase square of a field
            abc++;
            printf("{backtrack i=%d}\n", i++);
        }
        n++;
    }
   print(a, map);
} 