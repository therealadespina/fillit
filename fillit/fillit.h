/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 14:51:07 by abooster          #+#    #+#             */
/*   Updated: 2019/06/21 12:51:29 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft/libft.h"

typedef struct	s_tetra
{
	int			fd;
	int			count;
	char		*tmp;
	char		buf[22];
	int			n_count;
}				t_tetra;

typedef struct	s_fillit
{
	char		**tetras;
	int			*num;
	char		**array;
	char		*map;
	int			tetracount;
	int			smallestsize;
}				t_fillit;

typedef struct	s_data
{
	int			len;
	int			size;
	char		letter;
	int			p;
	int			mod;
}				t_data;

int				validate(char *str, char **valid);
char			*rm_line(char *str);
int				val_str(char *str, char **valid);
int				val_htag_dots(char *str);
char			**name_boxes(char **map, int boxescount);
int				*read_file(char *file, char **tetras);
int				*do_reads(t_tetra data, int *p, char **tetras);
int				make_smap(int counthtag);
char			**tetras(void);
int				bufcheck(t_tetra data);
int				count_n(char *str);
int				count_htag(char *str);
int				count_tetras(int *str);
int				fillit(char **argv);
int				make_smap(int i);
char			*make_map(int size);
char			**true_tetras(int *arr, int count);
char			**tetralloc(char *truetetras[19], int *str, int count);
int				len_n(char *s);
char			get_letter(char *tetra);
int				add_tetra(char *tetra, char *map, int i);
int				add_tetra2(char *tetra, char *map, int i, t_data data);
char			*rm_tetra(char *tetra, char *map);
void			solve(char **tetras, char **map, int total, int tiniestsize);
int				place(char **tetras, char *map, int tetra, int total);
char			*str_trimalt(char const *s);
int				isupper(int c);

#endif
