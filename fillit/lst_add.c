/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:29:39 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/25 17:04:49 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_figure    *lst_add(t_figure *head, int id, int number)
{
    int i;
    t_figure *tmp;
    t_figure *tmp2;

    i = 0;
    tmp = (t_figure)malloc(size_t(t_etris));
    tmp->next = NULL;
    if (!head)
        head = tmp;
    while (tmp->next != NULL)
       tmp = tmp->next;
    tmp->next = tmp2;
    tmp2->next = NULL;
    free(tmp);
    return (head);
}