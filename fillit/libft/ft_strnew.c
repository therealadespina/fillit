/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:12:34 by adespina          #+#    #+#             */
/*   Updated: 2019/04/24 13:43:55 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	p;
	char	*s;

	p = 0;
	if (size + 1 == 0)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (p <= size)
	{
		s[p] = '\0';
		p++;
	}
	return (s);
}
