/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:51:26 by adespina          #+#    #+#             */
/*   Updated: 2019/04/23 13:39:57 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;
	char			c;

	res = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = -n;
	}
	else
		res = n;
	if (res < 10)
	{
		c = res + 48;
		ft_putchar_fd(c, fd);
	}
	if (res >= 10)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putnbr_fd(res % 10, fd);
	}
}
