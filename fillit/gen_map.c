/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:42:42 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/20 15:33:17 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    gen_map()
{
   /* if(!( map = (char)ft_memalloc(len * sizeof(char) + 1)))
    return ; */
    char map[4][5];
    int i;
    
    i = 0;
    map[0][4] = '\0';
    map[1][4] = '\0';
    map[2][4] = '\0';
    map[3][4] = '\0';
    while (i < 4)
    {
        ft_memset(map[i], '.', 4);
        i++;
    }
    map[0][0] = 'A';
    map[0][1] = 'A';
    map[1][0] = 'A';
    map[1][1] = 'A';
    i = 0;
    while (i < 4)
    {
    printf("%s", map[i]);
    printf("\n");
        i++;
    }
    return ;
}

int main()
{
    gen_map();
    return (0);
}