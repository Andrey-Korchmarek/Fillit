/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_figure.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:48:32 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/27 14:25:23 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_figure    *sf_create(int id, int number)
{
    t_figure *head;
    
    if (!(head = malloc(sizeof(t_figure))))
        return (NULL);
    head->next = NULL;
    head->id = id;
    head->number = number;
    return (head); 
}

t_figure    sf_add(t_figure **head, int id, int number)
{
    t_
}
