/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/04 14:26:29 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int min_a(int *count) // "a" means a side of map square
{
    int i;

    i = 4;
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

int    insert(char abc, int *coord, char map[16][17], int y, int x, int a)
{   
    while (x <= a )
    {
	    while (y <= a)
        {
            while (x <= a && y <= a)
	        {
                if (y + coord[0] > a || x + coord[1] > a 
         	        || y + coord[2] > a || x + coord[3] > a 
         	        || y + coord[4] > a || x + coord[5] > a
                    || y + coord[0] < 0 || x + coord[1] < 0 
                    || y + coord[2] < 0 || x + coord[3] < 0 
                    || y + coord[4] < 0 || x + coord[5] < 0 )
                    break;
			        printf("{ insert  failed return-1 }\n");
		            if (map[y][x] != '.' || map[coord[0]][coord[1]] != '.' || 
		                map[coord[2]][coord[3]] != '.' || map[coord[4]][coord[5]] != '.' )
                        break;
			        printf("{ insert  failed return -2 }\n");
                    map[y][x] = abc;
    	            map[y + coord[0]][x + coord[1]] = abc;
    	            map[y + coord[2]][x + coord[3]] = abc;
    	            map[y + coord[4]][x + coord[5]] = abc; 
                    printf("{ insert() x: %d}", x);   
            }
        x++; 
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
    char abc;
    int i;
    int a;
    int x;
    int y;
    int j;
    int flg;
 //   int n;
   
    printf("backtrack count = %d\n", *count);
    a = min_a(count);
    i = 0;
    abc = 'A';
    x = 0;
    y = 0;
    j = 0;
    i = 0;
    flg = 0;
    
    /* n = 0;
    while (n < *count)
    {
       i = 0;
        while (i <= a)
	    {
		    j = 0;
		    while (j <= a)
		    {
			    if (!(insert(abc + n,  g_tetramines[storage[n]], map, i , j, a)))
                {
                    flg = 1;
                    break;
                }
			    j++;
                if (flg)
                break;
		    }
		    i++;
            if (flg)
            break;
	    }
        n++;
        if (flg)
        {
          flg = 0;
          continue; 
        } 
     }  */
    insert(abc,  g_tetramines[storage[0]], map, i , j, a);
    print(a, map);
} 