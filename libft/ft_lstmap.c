/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:09:31 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 20:26:47 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content, size_t content_size)
{
	if (!content)
		return ;
	free(content);
	content = NULL;
	content_size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*list;

	if (!lst || !(*f))
		return (NULL);
	list = f(lst);
	start = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			ft_lstdel(&start, del);
			return (NULL);
		}
		list = list->next;
	}
	return (start);
}
