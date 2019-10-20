/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:09:02 by adespina          #+#    #+#             */
/*   Updated: 2019/04/23 18:42:52 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	p;

	i = 0;
	p = 0;
	if (n)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && p < (n - 1))
		{
			i++;
			p++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
