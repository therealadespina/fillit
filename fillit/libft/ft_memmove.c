/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:14:14 by adespina          #+#    #+#             */
/*   Updated: 2019/04/23 17:38:49 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)destination;
	b = (unsigned char*)source;
	if (b == a)
		return (destination);
	if (b < a)
	{
		b = (unsigned char*)source + n - 1;
		a = destination + n - 1;
		while (n--)
			*a-- = *b--;
	}
	else
	{
		while (n--)
			*a++ = *b++;
	}
	return (destination);
}
