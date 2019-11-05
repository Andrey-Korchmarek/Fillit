/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:03:17 by mashley           #+#    #+#             */
/*   Updated: 2019/11/05 16:01:31 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_FILLIT_H
#define UNTITLED_FILLIT_H

#include "libft/libft.h"
#include "./mashley/mashley.h"
#include "./aelphias/aelphias.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct		s_fill
{
	char			**content;
	size_t			turn;
	struct s_fill	*next;
}					t_fill;

int	read_and_validation(int fd);
int array[2][6];

array = {
	{0,1,1,0,1,1}, {1,0,2,0,3,0}
}

#endif //UNTITLED_FILLIT_H
