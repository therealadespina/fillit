/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:09:16 by adespina          #+#    #+#             */
/*   Updated: 2019/04/24 18:24:36 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*s;
	int			sign;
	int			num;

	num = titlelittle(n);
	sign = (n < 0) ? 1 : 0;
	if (!(s = ft_strnew((size_t)(num + sign))))
		return (NULL);
	if (sign)
		s[0] = '-';
	else if (n > 0)
		num--;
	else
		s[0] = '0';
	while (n)
	{
		if (n > 0)
			s[num] = '0' + (n % 10);
		else
			s[num] = '0' + -(n % 10);
		n = n / 10;
		num--;
	}
	return (s);
}
