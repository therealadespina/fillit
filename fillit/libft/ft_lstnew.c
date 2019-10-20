/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:59:18 by adespina          #+#    #+#             */
/*   Updated: 2019/04/23 18:58:48 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*venom;

	venom = (t_list*)malloc(sizeof(t_list) * content_size);
	if (!venom)
		return (NULL);
	if (!content)
	{
		venom->content = NULL;
		venom->content_size = 0;
	}
	else
	{
		if (!(venom->content = malloc(content_size)))
			return (NULL);
		ft_memcpy((venom->content), content, content_size);
		venom->content_size = content_size;
	}
	venom->next = NULL;
	return (venom);
}
