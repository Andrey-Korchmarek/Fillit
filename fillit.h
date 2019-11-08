/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Created: 2019/11/01 19:03:17 by mashley           #+#    #+#             */
/*   Updated: 2019/11/07 15:57:46 by io               ###   ########.fr       */
=======
/*   Created: 2019/11/08 11:07:37 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 11:07:49 by mashley          ###   ########.fr       */
>>>>>>> 653e653f195ae161a43b17dbd9449ed607e7f4aa
=======
/*   Created: 2019/11/08 11:07:37 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 11:07:49 by mashley          ###   ########.fr       */
>>>>>>> a387284b1a2f24c3d308770d4fbc69df9a19ce66
/*                                                                            */
/* ************************************************************************** */

#ifndef MASHLEY_FILLIT_H
#define MASHLEY_FILLIT_H

# include "./Fillit/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

<<<<<<< HEAD
<<<<<<< HEAD
/*
int	read_and_validation(int fd);
*/
=======
=======
>>>>>>> a387284b1a2f24c3d308770d4fbc69df9a19ce66
typedef struct		s_etris
{
	int				*content;
	char			queue;
	struct s_etris	*next;
}					t_etris;

void		safe(t_etris **list, char *tetr, char count);
int			validation(char *tetr);
t_etris		*ft_tetnew(int *content, char queue);
void		ft_tetadd(t_etris **alst, t_etris *new);
char 		*fillit(int fd);
<<<<<<< HEAD
>>>>>>> 653e653f195ae161a43b17dbd9449ed607e7f4aa
=======
>>>>>>> a387284b1a2f24c3d308770d4fbc69df9a19ce66

#endif //UNTITLED_FILLIT_H
