/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:56:20 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:55:32 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlist;

	if (!(nlist = (t_list *)malloc(sizeof(t_list))))
	{
		free(nlist);
		return (NULL);
	}
	if (!(content))
	{
		nlist->content = NULL;
		nlist->content_size = 0;
	}
	else
	{
		if (!(nlist->content = malloc(sizeof(content) * content_size)))
		{
			free(nlist);
			return (NULL);
		}
		ft_memcpy((nlist->content), content, content_size);
		nlist->content_size = content_size;
	}
	nlist->next = NULL;
	return (nlist);
}
