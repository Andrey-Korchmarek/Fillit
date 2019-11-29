/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/29 14:09:13 by aelphias         ###   ########.fr       */
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
     while (i < 16 )
    {
        ft_memset(map[i], '.', 16);
        i++;
    }
}
void    backtrack(int *count, int	storage[26], char map[16][17])
{
        int a;
        int col;
        int row;
        int *tetramina;
        char abc;
        extern int g_tetramines[19][10];
        
        col = 0;
        row = 0;
        abc = (char)*count + 64;
        printf("backtrack abc=%c\n",abc);
        tetramina = g_tetramines[*count];
        printf("backtrack map =%s\n", map[0]);
        printf("backtrack storage =%c\n", storage[0]);
        a = min_a(count);
        printf("a=%d\n",a);

        while (col <= a)
        {
            while (row <= a)
            {
                map[row][col] = abc;
                row++;
            }
            col++;
        }
}