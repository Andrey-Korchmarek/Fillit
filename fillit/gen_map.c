/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:42:42 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/20 16:21:52 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    gen_map(int len)
{
   /* if(!( map = (char)ft_memalloc(len * sizeof(char) + 1)))
    return ; */
    char map[len][len + 1];
    int i;
    
    i = 0;
    while (i < len)
    {
     map[i][len] = '\0';
     i++;   
    }
    i = 0;
    while (i < 4)
    {
        ft_memset(map[i], '.', 4);
        i++;
    }
    while (i < len)
    {
        map[i][len] = 'A';
        i++;
    }
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
    int len;
    
    len = 4;
    gen_map(len);
    return (0);
}