/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/03 12:17:35 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int min_a(int *count) // "a" means a side of map square
{
    int i;

    i = 8;
    while(i * i < 4 * *count) /* How on earth does it work?)*/
    i++;
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

void ft_swap(int *a, int *b)
{
	int tmp_a;

	tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}

int    insert(char abc, int *coord, char map[16][17], int y, int x, int a)
{   
    int i;
    
    i = 0;
    if(x <= a - coord[9] && y <=a - coord[8])
    {
        if (map[y][x] != '.')
            return (-1);
        else
        {
            while (i < 6 )
            {
                if (map[y + coord[i]][x + coord[i + 1]] != '.')
                    return (-1);
                i = i + 2;
             }
        }
    }
    map[y][x] = abc;
    map[y + coord[0]][x + coord[1]] = abc;
     map[y + coord[2]][x + coord[3]] = abc;
      map[y + coord[4]][x + coord[5]] = abc;
    return(0);
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
    int *coord;
    char abc;
    int i;
    int a;
    int x;
    int y;
    int j;
    int flg;
    int n;
    
    printf("backtrack count = %d\n", *count);
    a = min_a(count);
	coord = g_tetramines[storage[0]]; /* [storage[*count - 1] is a number  of figure 0-18 */
    i = 0;
    abc = 'A';
    x = 0;
    y = 0;
    j = 0;
    i = 0;
    flg = 0;
    //insert(abc, coord, map, y , x, a);
  //  coord = g_tetramines[storage[1]];
    // while (i <= *count)
    // {
    //     if (!(insert(abc, coord, map, y , x, a)))
    //     {
    //         y++; 
    //         x = 0;
    //     }
    //     i++;
    // }
    i = 0;
    /* while (i < *count)
    {
        coord = g_tetramines[storage[i]];
        i++;
    } */
    
    
flg = 0;
     n = 0;
     while (n < *count)
     {
        coord = g_tetramines[storage[n]];
        i = 0;
    while (i <= a)
	{
		j = 0;
		while (j <= a)
		{
			if (!(insert(abc + n, coord, map, i , j, a)))
            {
                print(a, map);
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
     } 
    
    print(a, map);
}
