/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/28 13:58:30 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    backtrack(int count, char   storage[26], char map[16][17])
{
    int i;
    
    i = 0;
    printf("Count :%d\n", count);
    while (i < count)
    {
    printf("Map: %c\n", storage[i]);
        i++;
    }
    i = 0;
    while(i < 16)
    {
        printf("%s\n", map[i]);
        i++;
    }
}