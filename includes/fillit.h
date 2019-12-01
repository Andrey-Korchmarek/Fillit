/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:07:37 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 11:07:49 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASHLEY_FILLIT_H
#define MASHLEY_FILLIT_H
# define INTMIN ( -2147483648 )
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_etris
{
	int				*content;
	char			queue;
	struct s_etris	*next;
}					t_etris;

typedef struct		s_dance
{
	char 			letter;
	int 			x;
	int 			y;
	struct s_dance	*left;
	struct s_dance	*right;
	struct s_dance	*up;
	struct s_dance	*down;
}					t_dance;

typedef struct	Ring {
	size_t		size;
	t_dance		*current;
} 				matrix;

typedef struct			s_cwr
{
	t_list				*head;
	struct s_cwr		*right;
}						t_cwr;

matrix	*create_matrix(int *storage, int tetrnom);
int	check_neig1(char **tetr);
int	check_neig2(char **tetr);
int	check_sign(char *tetr);
int	check_tetr(char *tetr);
int	*coordinates(char **tetr);
void	dicycle(matrix **root, int a, int form, int count);
int	*eight_to_six(int *valtet);
matrix	*fillit(int fd, int *count);
int	*first(char **tetr);
void	ft_bzero(void *b, size_t n);
t_dance	*ft_dannew(char queue, int x, int y);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list*elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list	*ft_lstnew(void const *content, size_t content_size);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	*ft_realloc(void *ptr, size_t newsize);
int ft_strcount(char *str, char c);
void	ft_strdel(char **as);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
size_t	ft_strplen(const char *str);
char			**ft_strsplit(char const *s, char c);
void	ft_tetadd(t_etris **alst, t_etris *new);
t_etris	*ft_tetnew(int *content, char queue);
int *get_coord(int x, int y, int form);
matrix	*line_generator(char count, int *coordinates);
void matrix_add_down(matrix *hat, t_dance *tmp);
void	matrix_add_line(matrix **root, matrix *line);
void matrix_add_right(matrix *root, t_dance *tmp);
matrix*	matrix_create();
void	matrix_delete_element(matrix *element);
matrix	*matrix_generator(int size);
void	matrix_print(matrix *root);
int min_map(int count);
void	safe(t_etris **list, char *tetr, char count);
int	validation(char *tetr);
void	ft_putnode(matrix *root);
void		matrix_delete(matrix *root);
void	cg_delete_dest_row(t_dance *head);
int	calculation(matrix *root, int count);


int	cg_fillit(t_dance *goal, t_cwr **stack, int tet_count);
void		cg_uncover_and_free(t_cwr **stack, int i);
void	cg_stack_del_node(t_cwr **stack);
void			cg_uncover(t_list *queue);
t_cwr			*cg_add_to_stack(t_cwr **stack, t_list *new);
int				cg_cover_all(t_list **queue, t_dance *goal);
void	cg_print_tetris(matrix *root);

#endif
