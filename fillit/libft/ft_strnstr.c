/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:33:50 by adespina          #+#    #+#             */
/*   Updated: 2019/04/22 19:57:42 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	p;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		p = 0;
		while (s1[i + p] == s2[p] && (i + p) < n)
		{
			if (s2[p + 1] == '\0')
				return ((char*)s1 + i);
			else
				p++;
		}
		i++;
	}
	return (0);
}
