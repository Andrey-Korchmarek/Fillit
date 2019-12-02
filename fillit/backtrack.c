/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/02 12:05:04 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int min_a(int *count)
{
    int i;

    i = 2;
    while(i * i < 4 * *count)
    i++;
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
    int i;
    int j;
     
    i = 0;
    if(x <= a - coord[9] && y <=a - coord[8])
    {
        if (map[y][x] == '.')
            map[y][x] = abc;
        else
            return(0);
        while (i < 6 )
        {
            if (map[y + coord[i]][x + coord[i + 1]] == '.')
            {
                 map[y + coord[i]][x + coord[i + 1]] = abc;
                i = i + 2 ;
            }
            else
                return(0);
        }
    }
    else
    {
        insert(abc, coord, map, y, x, a + 1);
    	i = 0;
    }
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
    return (1);
}

void    backtrack(int *count, int storage[26], char map[16][17])
{
    extern int g_tetramines[19][10];
    int a;
    int col;
    int row;
    int *coord;
    char abc;
    int x;
    int y;
    int i;
    int flg;
 
	coord = g_tetramines[storage[*count - 1]]; /* [storage[*count - 1] is a number  of figure 0-18 */
    i = 0;
    flg = 0;
    x = coord[7];
    y = coord[6];
    col = 0;
    row = 0;
    abc = 'A';
    printf("backtrack abc=%c\n", abc);
	 i = 0;
     while (i < 6)
    {
        printf("%d", g_tetramines[*count][i]);
        i++;
    }
    printf("\n");
    printf("backtrack map =%s\n", map[0]);
    printf("backtrack storage =%d\n", storage[0]);
  	 a = min_a(count);
    printf("a=%d\n",a);
   i = 0;
   insert(abc, coord, map, y, x, a);
   /*  while(i < *count)
    {
    	flg = insert(abc, coord, map, y, x, a);
        i++;
    }
    while (!flg && !(insert(abc, coord, map, y, x)) )
    {
        a++;
        while(i < *count && x <= a - coord[9] && y <=a - coord[8])
        {
    	flg = insert(abc, coord, map, y, x);
         
        i++;
        }
    }    */


       /* while (col <= a)        {
            while (row <= a)
            {   
                printf("inside backtrackloop\n");
                insert(abc, coord, map);
                row++;
            }
            col++;
        } */
} 