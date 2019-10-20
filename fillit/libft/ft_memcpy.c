/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:30:07 by adespina          #+#    #+#             */
/*   Updated: 2019/04/16 18:52:28 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t			v;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)destination;
	s2 = (unsigned char *)source;
	v = 0;
	while (v < n)
	{
		s1[v] = s2[v];
		v++;
	}
	return (destination);
}
