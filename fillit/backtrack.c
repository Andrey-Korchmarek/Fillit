/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/30 16:21:43 by aelphias         ###   ########.fr       */
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
void    insert(char abc, int *coord, char map[16][17], int y, int x)
{   
    int i;
     
    i = 0;
    map[0][0] = abc;
    while (i < 6)
    {
        map[y + coord[i]][x + coord[i + 1]] = abc;
        i = i +2 ;
    }
    
}

void    backtrack(int *count, int storage[26], char map[16][17])
{
    int a;
    int col;
    int row;
    int *coord;
    char abc;
    extern int g_tetramines[19][10];
    int x;
    int y;
    int i;
        
    i = 0;
    x = 0;
    y = 0;
    col = 0;
    row = 0;
       // row = coord[6]; // using 2 last pairs from storage array to have safe boundaries
    abc = 'A';
    printf("backtrack abc=%c\n", abc);
    coord = g_tetramines[*count];
    //printf("backtrack coord =%s\n", coord);
        printf("backtrack fig coordintes = ");
	 i = 0;
     while (i < 6)
    {
        printf("%d", g_tetramines[*count][i]);
        i++;
    }
        printf("\n");
    
    printf("backtrack map =%s\n", map[0]);
    printf("backtrack storage =%c\n", storage[0]);
       // a = min_a(count);
    a = 0;
    printf("a=%d\n",a);
    insert(abc, coord, map, y, x);
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