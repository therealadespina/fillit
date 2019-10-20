/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrimalt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:42:29 by abooster          #+#    #+#             */
/*   Updated: 2019/06/19 16:13:06 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		find_space(int c)
{
	if ((c == '.' || c == '\n'))
		return (1);
	return (0);
}

static char		str_space(char const *s)
{
	int			i;
	int			z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == '.' || s[i] == '\n'))
			z++;
		i++;
	}
	if (i == z)
		return (1);
	return (0);
}

char			*str_trimalt(char const *s)
{
	size_t		front;
	size_t		back;
	size_t		z;
	char		*middle;

	if (!s || !ft_strlen(s))
		return ((char*)s);
	if (str_space(s) == 1)
		return (ft_strnew(1));
	front = 0;
	back = ft_strlen(s) - 1;
	z = 0;
	while (find_space(s[front]))
		front++;
	while (find_space(s[back]) != 0)
		back--;
	z = back - front + 1;
	if (!(middle = ft_strnew(z + 1)))
		return (NULL);
	return (ft_strncpy(middle, &s[front], z));
}
