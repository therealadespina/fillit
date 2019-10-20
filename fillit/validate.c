/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:42:51 by abooster          #+#    #+#             */
/*   Updated: 2019/06/19 16:20:14 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			val_htag_dots(char *str)
{
	int		i;
	int		htag;
	int		dot;

	i = 0;
	htag = 0;
	dot = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			htag++;
		if (str[i] == '.')
			dot++;
		i++;
	}
	if (htag == 4 && dot == 12)
		return (1);
	else
		return (0);
}

int			val_str(char *str, char **valid)
{
	int		n;

	n = 0;
	while (n <= 18)
	{
		if (!(ft_strcmp(str, valid[n])))
			return (n + 1);
		n++;
	}
	return (-1);
}

char		*rm_line(char *str)
{
	int		i;
	int		z;
	char	*str2;

	i = 0;
	z = 0;
	str2 = ft_strnew(ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
		{
			str2[z] = str[i];
			z++;
		}
		i++;
	}
	free(str);
	return (str2);
}

int			validate(char *str, char **valid)
{
	int		i;

	i = 0;
	if (!(val_htag_dots(str)))
		return (-1);
	str = str_trimalt(str);
	str = rm_line(str);
	i = val_str(str, valid);
	free(str);
	if (i >= 1)
		return (i - 1);
	return (-1);
}
