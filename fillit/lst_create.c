/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:43:17 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/25 16:49:37 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_figure    *lst_create(int id, int number)
{
    t_figure *tmp;
    tmp = (t_figure)malloc(size_t(t_figure));
    tmp->next = NULL;
    tmp->id = id;
    tmp->number = number;
    return (tmp); 
}