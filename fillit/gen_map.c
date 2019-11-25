/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:42:42 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/25 11:53:25 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void   gen_map(char map[16][17])
{
    int size;
    int i;
    
    size = 16;
    i = 0;
    while (i < size)
    {
        map[i][size] = '\0';
        i++;   
    }
    i = 0;
    while (i < size )
    {
        ft_memset(map[i], '.', size);
        i++;
    }
}

/*  int main(void)
{
    int size;
    char map[16][17];
    int i;

    i = 0;
    size = 16;
    gen_map(map);
     while (i < size)
     {
        printf("%s\n", map[i]); 
        i++;       
     }
    return (0);
}  */