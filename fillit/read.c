/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 14:50:39 by abooster          #+#    #+#             */
/*   Updated: 2019/10/20 20:41:05 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				bufcheck(t_tetra data)
{
	if ((!(data.buf[0] == '#' || data.buf[0] == '.'))
			|| (!(data.buf[19] == '\n'))
			|| (count_htag(data.buf) != 4))
		return (0);
	return (1);
}

int				count_htag(char *str)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			j++;
		i++;
	}
	return (j);
}

int				*read_file(char *file, char **tetras)
{
	t_tetra		data;
	int			*tetra;

	if (!(data.fd = open(file, O_RDONLY)))
		return (0);
	if (!(tetra = (int*)ft_memalloc(sizeof(int) * 27)))
		return (0);
	data.count = 0;
	data.n_count = 0;
	while ((data.count < 26) && (read(data.fd, data.buf, 21) != 0))
	{
		if (!(bufcheck(data)))
			return (0);
		if (!(tetra = do_reads(data, tetra, tetras)))
			return (0);
		data.n_count = data.n_count + count_n(data.buf);
		ft_bzero(data.buf, 21);
		data.count++;
	}
	if ((data.count - 1) > 26 || data.count == 0
			|| data.n_count > ((data.count * 5) - 1))
		return (0);
	close(data.fd);
	return (tetra);
}

int				count_n(char *str)
{
	int			i;
	int			n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

int				*do_reads(t_tetra data, int *p, char **tetras)
{
	int			i;

	i = validate(data.buf, tetras);
	if (i == -1)
		return (NULL);
	else if (i == 0)
		p[data.count] = 19;
	else
		p[data.count] = i;
	return (p);
}
