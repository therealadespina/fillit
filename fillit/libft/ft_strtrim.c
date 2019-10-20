/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:45:11 by adespina          #+#    #+#             */
/*   Updated: 2019/04/24 18:05:24 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	if (end > 0)
	{
		while (s[start] && strtrim_a(s[start]))
			start++;
		if (s[start] == '\0')
			start = end;
		else
		{
			while (--end > 0 && strtrim_a(s[end]))
				(void)0;
			end++;
		}
	}
	return (strtrim_b(s, start, end));
}
